// TestVerificateur.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Verificateur.h"
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::cout;
using std::endl;

int main()
{
	Bloc b;
	bool verificateur;
	verificateur = verifier(b, 3);
	cout << verificateur << endl;
	return 0;
}

