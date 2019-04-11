#include "Signature.h"
#include <iostream>
using namespace std;

int main(){
	Signature *signature = new Signature();
	Clefs key = signature->genererClefs();
	key.save();
	cout << "Private Key : " << key.private_key << endl;
	cout << "Public Key : " << key.public_key << endl;

	string data = "projet composant";
	string signature_str = signature->signerMessage(data, key.private_key);
	cout << "Signature ['" << data << "'] : " << signature_str << endl;

	bool isValidated = signature->validerSignature(data, key.public_key, signature_str);
	cout << "Is validated ? " << isValidated << endl;

	signature_str = "797c616b290eba27d8e7a13dc044ac641a3b8cab5cecb57dd98b518744dfe3ab42bf2a530c02f8c951855f3217fb55ae600e414c3a0040227d6091aecc62242d";
	isValidated = signature->validerSignature(data, key.public_key, signature_str);
	cout << "Is validated (with a wrong signature) ? " << isValidated << endl;
	return 0;
}