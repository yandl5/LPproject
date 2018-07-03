#ifndef ASSASSINO 
#define ASSASSINO
#include "entidade.h"
#include "personagem.h"
class assassino: public personagem
{
private:
	bool ligadoLamina;
	bool ligadoEsquivaPerfeita;
public:
	assassino(string nome);
	~assassino();

	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
	int skillTres(int armFisica,int armRunica,int hp);
	void aplicarDebuffs();
};
#endif