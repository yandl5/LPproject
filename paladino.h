#ifndef PALADINO
#define PALADINO
#include "entidade.h"
class paladino:public entidade,public ataque,public bloqueio, public esquiva
{
private:
	string Nome;
public:
	paladino(string nome);
	~paladino();
	string getNome();
	void meditar();
	int gloriaDivina(int valor);
	void encantarArma();
	int controleAtaque(string valor,int armRunica);
};
#endif