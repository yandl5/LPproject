#ifndef COMBATE
#define COMBATE
#include "paladino.h"
#include "mago.h"
#include "assassino.h"
#include "viking.h"
#include "esqueleto.h"
#include "minotauro.h"
#include <memory>
#include <vector>
#include "monstros.h"
#include "personagem.h"
#include <string>
#include <iostream>
using namespace std;
bool combate(vector<shared_ptr<personagem>> A,vector<shared_ptr<monstro>> it,int i);
#endif