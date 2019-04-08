#pragma once

#include <iostream>
#include <vector>
#include "Bloc.h"
#include <string>
#include "Verificateur.h"


#define VERIFICATEUR_H
#define VERIFICATEUR_VERSION_STR "1,0,0,0"
#define VERIFICATEUR_VERSION 1,0,0,0

#ifdef  VERIFICATEUR_EXPORTS
#define VERIFICATEUR_EXPORT_INTERFACE __declspec(dllexport)
#else
#define VERIFICATEUR_EXPORT_INTERFACE __declspec(dllimport)
#endif //  VERIFICATEUR_EXPORT

VERIFICATEUR_EXPORT_INTERFACE bool verifier(Bloc bloc_a_verifier, Bloc bloc_precedent, unsigned int difficulty);
VERIFICATEUR_EXPORT_INTERFACE bool verifier(Bloc bloc_a_verifier, unsigned int difficulty);

