#include "esquiva.h"
esquiva::esquiva(int valor):porcentagem(100)
{
	rateEsquiva=valor;
}
esquiva::~esquiva(){}
int esquiva::getEsquiva()
{
	return rateEsquiva;
}
void esquiva::setEsquiva(int valor)
{
	rateEsquiva=valor;
}
bool esquiva::esquivar()
{
	porcentagem.Jogar();
	if(porcentagem.getValor()<=rateEsquiva)
		return true;
	else
		return false;
}
