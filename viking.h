#ifndef VIKING
#define VIKING 
#include "entidade.h"
#include "personagem.h"
class viking: public personagem
{
private:
public:
	viking(string nome);
	~viking();
	int controleAtaque(string valor,int armFisica,int armRunica,int hp);
	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
	int skillTres(int armFisica,int armRunica,int hp);
	void help();
};
#endif