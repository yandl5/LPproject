#include "bloqueio.h"
/**
	*@brief Criação do objeto bloqueio.
	*@details Recebe a armadura rûnica e física para construção do objeto.
	*@return Objeto bloqueio.
*/
bloqueio::bloqueio(int armFisica,int armRunica)
{
	armaduraFisica=armFisica;
	armaduraRunica=armRunica;
}
bloqueio::~bloqueio(){}
/**
	*@brief Método get armadura rûnica.
	*@details
	*@return Armadura rûnica.
*/
int bloqueio::getArmaduraRunica()
{
	return armaduraRunica;
}
/**
	*@brief Método get armadura física.
	*@details
	*@return Armadura física.
*/
int bloqueio::getArmaduraFisica()
{
	return armaduraFisica;
}
/**
	*@brief Método set armadura rûnica.
	*@details
	*@return void.
*/
void bloqueio::setArmaduraRunica(int x)
{
	armaduraRunica=x;
}
/**
	*@brief Método set armadura física.
	*@details
	*@return void.
*/
void bloqueio::setArmaduraFisica(int y)
{
	armaduraFisica=y;
}