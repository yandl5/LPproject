#include "ataque.h"
/**
	*@brief Criação do objeto ataque.
	*@details Atribui-se valor de ataque conforme informado.
	*@return Objeto ataque.
*/
ataque::ataque(int valor)
{
	ValorAtaque=valor;
}
ataque::~ataque(){}
/**
	*@brief Método de realizar dano.
	*@details Calcula o dano baseaso no valor informado.
	*@return Valor do dano.
*/
int ataque::realizarDano(int bloqueio)
{
	ValorDano=(ValorAtaque*2)-bloqueio;
	if(ValorDano<0)
		ValorDano=0;
	return ValorDano;
}
/**
	*@brief Método get para obtênção do valor de ataque.
	*@details 
	*@return Valor de ataque.
*/
int ataque::getValorAtaque()
{
	return ValorAtaque;
}
/**
	*@brief Método get para obtênção do valor do dano.
	*@details 
	*@return Valor do dano.
*/
int ataque::getValorDano()
{
	return ValorDano;
}
/**
	*@brief Método set para o valor de ataque.
	*@details 
	*@return void
*/
void ataque::setValorAtaque(int x)
{
	ValorAtaque=x;
}