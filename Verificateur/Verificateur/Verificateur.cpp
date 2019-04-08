#include "Verificateur.h"
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;

int nbZerosCounter(std::string str) {
	int nbZeros = 0;
	for (int i = str.size() - 1; i >= 0; i--) {
		if (str[i] == '0') nbZeros++;
		else break;
	}
	return nbZeros;
}

// si le bloc est initial
bool verifierInitial(Bloc bloc_a_verifier, unsigned int difficulty)
{
	bool verification = true;
	Hacheur hash = Hacheur();
	// verification du hash du bloc
	string hashRecalcule= hash.hacher(bloc_a_verifier.ToStringSansHash());
	if(hash.verifier_hachage(bloc_a_verifier.hash, hashRecalcule)==false)
	{
		cout << "Error Hash du bloc" << endl;
		return false;
	}
	
	// verification de l'index du bloc
	if (bloc_a_verifier.num != 0)
	{
		cout << "Error Index vide" << endl;
		return false;
	}
	// verifier la difficulte du hash (nombre de zeros)
	if (nbZerosCounter(bloc_a_verifier.hash) != difficulty) 
	{
		cout << "Error nombre de difficulte du hash" << endl;
		return false;
	}
	//verification des TXIs
	for (unsigned int i = 0; i < bloc_a_verifier.tx1.TXIs.size(); i++)
	{

	}

	//verification des UTXO
	for (unsigned int i = 0; i < bloc_a_verifier.tx1.UTXOs.size(); i++)
	{

	}


	return  verification;
}

//sinon
bool verifier(Bloc bloc_a_verifier, Bloc bloc_precedent,unsigned int difficulty)
{
	bool verification = true;
	//verification du hash précédent
	Hacheur hashPrecedent = Hacheur();
	// verification du hash du bloc
	string hashRecalculePrecedent = hashPrecedent.hacher(bloc_precedent.ToStringSansHash());
	if (hashPrecedent.verifier_hachage(bloc_a_verifier.previous_hash, hashRecalculePrecedent) == false)
	{
		cout << "Error Hash du bloc precedent" << endl;
		return false;
	}

	// verification du hash du bloc
	Hacheur hash = Hacheur();
	// verification du hash du bloc
	string hashRecalcule = hash.hacher(bloc_a_verifier.ToStringSansHash());
	if (hash.verifier_hachage(bloc_a_verifier.hash, hashRecalcule) == false)
	{
		cout << "Error Hash du bloc" << endl;
		return false;
	}

	// verification de l'index du bloc
		if (bloc_a_verifier.num == NULL) 
		{
			cout << "Error Index vide" << endl;
			return false;
		}
	//on verifie si l'index du blocc est plus grand que celui du précédent
		if (bloc_a_verifier.num > 0) {
			if (bloc_a_verifier.num != bloc_precedent.num + 1)
			{
				cout << "Error Index du bloc" << endl;
				return false;
			}
		}
	// verifier la difficulte du hash (nombre de zeros)
		if (nbZerosCounter(bloc_a_verifier.hash) != difficulty)
		{
			cout << "Error nombre de difficulte du hash" << endl;
			return false;
		}
	//verification des TXIs


	//verification des UTXO



	return  verification;
}
