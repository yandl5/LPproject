#ifndef VIKING
#define VIKING 
#include "entidade.h"
class viking: public entidade,public ataque,public bloqueio, public esquiva
{
private:
	string Nome;
public:
	viking(string nome);
	~viking();
	string getNome();
	int balancoTemerario(int valor);
	int furiaImplacavel(int valor);
	int avancoFinal(int hp,int armFisica);
	int controleAtaque(string valor,int armFisica,int HP);
};
#endif