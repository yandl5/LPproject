#include "entidade.h"
/**
	*@brief Criação do objeto entidade.
	*@details Recebe os valores de hp e mana da entidade.
	*@return Objeto entidade.
*/
entidade::entidade(int hp,int mana):HP(hp),Mana(mana){}
entidade::~entidade(){}
/**
	*@brief Método get do hp.
	*@details 
	*@return hp da entidade.
*/
int entidade::getHP()
{
	return HP;
}
/**
	*@brief Método get da mana.
	*@details 
	*@return mana da entidade.
*/
int entidade::getMana()
{
	return Mana;
}
/**
	*@brief Método debitar hp.
	*@details Reduz o valor do hp da entidade baseado no valor informado.
	*@return void.
*/
void entidade::debitarHP(int valor)
{
	if(HP>valor)
		HP=HP-valor;
	else
		HP=0;
}
/**
	*@brief Método debitar mana.
	*@details Reduz o valor da mana da entidade baseado no valor informado.
	*@return void.
*/
void entidade::debitarMana(int valor)
{
	if(Mana>valor)
		Mana=Mana-valor;
	else
		Mana=0;
}
/**
	*@brief Método set hp.
	*@details 
	*@return
*/
void entidade::setHP(int valor)
{
	HP=valor;
}
/**
	*@brief Método set mana.
	*@details 
	*@return
*/
void entidade::setMana(int valor)
{
	Mana=valor;
}