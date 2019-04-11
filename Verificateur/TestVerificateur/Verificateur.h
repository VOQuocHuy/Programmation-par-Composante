#pragma once

#include "Interfaces\Hacheur.h"
#include <iostream>
#include <vector>
#include "Interfaces\Bloc.h"
#include <string>
#include "Interfaces\Hacheur.h"
#include "Interfaces\Signature.h"


#define VERIFICATEUR_H
#define VERIFICATEUR_VERSION_STR "1,2,0,0"
#define VERIFICATEUR_VERSION 1,2,0,0

#ifdef  VERIFICATEUR_EXPORTS
#define VERIFICATEUR_EXPORT_INTERFACE __declspec(dllexport)
#else
#define VERIFICATEUR_EXPORT_INTERFACE __declspec(dllimport)
#endif //  VERIFICATEUR_EXPORT

VERIFICATEUR_EXPORT_INTERFACE bool verifier(Bloc bloc_a_verifier, Bloc bloc_precedent, unsigned int difficulty);
VERIFICATEUR_EXPORT_INTERFACE bool verifierInitial(Bloc bloc_a_verifier, unsigned int difficulty);
VERIFICATEUR_EXPORT_INTERFACE bool verifierSignature(string data, string public_key, string signature);
