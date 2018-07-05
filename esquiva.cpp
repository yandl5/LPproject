#include "esquiva.h"
/**
	*@brief Criação do objeto esquiva.
	*@details Recebe o valor de esquiva e cria-se um dado D100.
	*@return Objeto esquiva.
*/
esquiva::esquiva(int valor):porcentagem(100)
{
	rateEsquiva=valor;
}
esquiva::~esquiva(){}
/**
	*@brief Método get de esquiva.
	*@details
	*@return rateEsquiva.
*/
int esquiva::getEsquiva()
{
	return rateEsquiva;
}
/**
	*@brief Método set de esquiva.
	*@details
	*@return void.
*/
void esquiva::setEsquiva(int valor)
{
	rateEsquiva=valor;
}
/**
	*@brief Método esquivar.
	*@details Joga-se um dado D100 e baseado no rate de esquiva determina se o alvo vai ou não se esquivar.
	*@return Bool valor.
*/
bool esquiva::esquivar()
{
	porcentagem.Jogar();
	if(porcentagem.getValor()<=rateEsquiva)
		return true;
	else
		return false;
}
