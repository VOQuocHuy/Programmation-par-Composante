#include "Verificateur.h"
#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::endl;


// si le bloc est initial
bool verifierInitial(Bloc bloc_a_verifier, unsigned int difficulty)
{
	bool verification = true;
	
	// verification du hash du bloc
	string hashRecalcule=hash(bloc_a_verifier);
	for (int i = 0; i < HASH_SIZE; i++)
	{
		if (bloc_a_verifier.hash[i] != hashRecalcule[i])
		{
			cout << "Error Hash" << endl;
			return false;
		}
	}
	// verification de l'index du bloc
	if (bloc_a_verifier.num != 0)
	{
		cout << "Error Index vide" << endl;
		return false;
	}
	// verifier la difficulte du hash (nombre de zeros)
	
	//verification des TXIs

	//verification des UTXO

	return  verification;
}

//sinon
bool verifier(Bloc bloc_a_verifier,Bloc bloc_precedent,unsigned int difficulty)
{
	bool verification = true;
	//verification du hash précédent
	if (bloc_a_verifier.num >0)
	{
		string strHash = bloc_precedent.hash;
		miner(difficulty, bloc_precedent);
		for (int i = 0; i < HASH_SIZE; i++)
		{
			if (bloc_precedent.hash[i] != strHash[i])
			{
				cout << "Error Hash precdent" << endl;
				return false;
			}
		}
	};
	// verification du hash du bloc
	string hashRecalcule=hash(bloc_a_verifier);
	for (int i = 0; i < HASH_SIZE; i++)
	{
		if (bloc_a_verifier.hash[i] != hashRecalcule[i])
		{
			cout << "Error Hash" << endl;
			return false;
		}
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
	
	
	//verification des TXIs

	//verification des UTXO

	return  verification;
}
