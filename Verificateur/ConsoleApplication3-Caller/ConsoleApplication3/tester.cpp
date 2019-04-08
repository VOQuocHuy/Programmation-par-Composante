#include "stdafx.h"
#include "Mineur.h"
#include <iostream>
#include <vector>
#include <string>
using std::string;
using std::cout;
using std::endl;


int main()
{
	Bloc b;
	b = miner(3, b);
	cout << "hash found:" << std::string(b.hash).substr(0,HASH_SIZE) << endl;
	return 0;
}

