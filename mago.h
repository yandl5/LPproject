#ifndef MAGO
#define MAGO
#include "entidade.h"
#include "personagem.h"
class mago:public personagem
{
private:
public:
	mago(string Nome);
	~mago();
	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
	int skillTres(int armFisica,int armRunica,int hp);
};
#endif