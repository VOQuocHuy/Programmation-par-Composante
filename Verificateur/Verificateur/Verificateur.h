
#pragma once

#ifndef VERIFICATEUR_H
#define VERIFICATEUR_H
#define VERIFICATEUR_VERSION_STR "1,0,0,0"
#define VERIFICATEUR_VERSION 1,0,0,0

#ifdef  VERIFICATEUR_EXPORT
	#define VERIFICATEUR_EXPORT_INTERFACE __declspec(dllexport)
#else
	#define VERIFICATEUR_EXPORT_INTERFACE __declspec(dllimport)
#endif //  VERIFICATEUR_EXPORT

#include <string>

class Verificateur
{
	VERIFICATEUR_EXPORT_INTERFACE Verificateur();
	VERIFICATEUR_EXPORT_INTERFACE bool verifier(std::string bloc_a_verifier);
};

#endif