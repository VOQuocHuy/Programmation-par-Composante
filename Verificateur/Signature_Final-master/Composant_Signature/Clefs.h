#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Clefs {
public:
	Clefs(string private_key, string public_key);
	void save();
	string private_key;
	string public_key;
};