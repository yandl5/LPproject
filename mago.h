#ifndef MAGO
#define MAGO
#include "entidade.h"
class mago:public entidade, public ataque, public bloqueio, public esquiva
{
private:
	string Nome;
public:
	mago(string nome);
	~mago();
	string getNome();
	int faisca();
	int geloPerpetuo(int valor);
	int inferno(int valor);
	void protectMana();
	int controleAtaque(string valor,int armRunica);
};
#endif