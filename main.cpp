#include <iostream>
#include "dado.h"
#include "ataque.h"
#include "bloqueio.h"
#include "esquiva.h"
#include "esqueleto.h"
#include "viking.h"
#include "paladino.h"
#include "mago.h"
#include "assassino.h"
#include "verdugo.h"
#include "minotauro.h"
#include <vector>
#include <memory>
#include <string>
#include "monstros.h"
#include "personagem.h"
#include "combate.h"
#include "fases.h"
#include "ghoul.h"
using namespace std;
int main()
{
	fases a;
	a.faseUm();
	a.faseDois();
	a.faseTres();
	a.faseQuatro();
	cout<<endl;
	a.EndGame();
	cout<<endl;
	return 0;
}
//g++ -Wall -pedantic -std=c++11 -o tt -O0 dado.cpp ataque.cpp bloqueio.cpp esquiva.cpp entidade.cpp assassino.cpp mago.cpp paladino.cpp viking.cpp esqueleto.cpp minotauro.cpp monstros.cpp personagem.cpp main.cpp