#include "stdafx.h"
#include <iostream>
#include "Bloc.h"


std::string Bloc::ToString() {
	return "fooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo" + nonce;
}

Bloc::Bloc() {
	nonce = 0;
}

