#ifndef PALADINO
#define PALADINO
#include "entidade.h"
class paladino:public entidade,public ataque,public bloqueio, public esquiva
{
private:
	string nome;
public:
	paladino(string Nome);
	~paladino();
	void meditar();
	int gloriaDivina(int valor);
	void encantarArma(int valor);
	int controleAtaque(int armRunica);
};
#endif