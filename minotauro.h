#ifndef MINOTAURO
#define MINOTAURO
#include "entidade.h"
#include "monstros.h"
class minotauro: public monstro
{
private:
public:
	minotauro();
	~minotauro();
	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
	//int realizarAtaque(int armFisica, int armRunica,int hp);
};
#endif