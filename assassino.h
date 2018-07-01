#ifndef ASSASSINO 
#define ASSASSINO
#include "entidade.h"
class assassino: public entidade, public ataque, public bloqueio, public esquiva
{
private:
	string Nome;
	bool ligadoLamina;
	bool ligadoEsquivaPerfeita;
public:
	assassino(string nome);
	~assassino();
	int ataqueDuplo(int valor);
	int laminaVenenosa(int valor);
	int esquivaPerfeita(int valor);
	string getNome();
	void aplicarDebuffs();
	int controleAtaque(string valor,int armFisica);
};
#endif