#ifndef PALADINO
#define PALADINO
#include "entidade.h"
#include "personagem.h"
class paladino:public personagem
{
private:
public:
	paladino(string Nome);
	~paladino();
	int controleAtaque(string valor,int armFisica,int armRunica,int hp);
	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
	int skillTres(int armFisica,int armRunica,int hp);
	void help();
};
#endif