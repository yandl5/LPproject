#include "personagem.h"
personagem::personagem(int valorAtaque,int hp,int mana,int armFisica,int armRunica,int perEsquiva,string Nome):
entidade(hp,mana),ataque(valorAtaque),bloqueio(armFisica,armRunica),esquiva(perEsquiva),nome(Nome){}
personagem::~personagem(){}
int personagem::controleAtaque(string valor,int armFisica,int armRunica,int hp)
{
	int dano=0;
	if(valor=="1")
	{
		valor=this->Dano(armFisica);
	}
	if(valor=="2")
	{
		valor=this->skillUm(armFisica,armRunica,hp);
	}
	else if(valor=="3")
	{
		dano=this->skillDois(armFisica,armRunica,hp);
	}
	else if(valor=="4")
	{
		valor=this->skillTres(armFisica,armRunica,hp);
	}
	return dano;
}
int personagem::skillUm(int armFisica,int armRunica,int hp){return 0;}
int personagem::skillDois(int armFisica,int armRunica,int hp){return 0;}
int personagem::skillTres(int armFisica,int armRunica,int hp){return 0;}
string personagem::getNome()
{
	return nome;
}
int personagem::getAtaque()
{
	return this->getValorAtaque();
}
void personagem::setAtaq(int valor)
{
	this->setValorAtaque(valor);
}
int personagem::getHp()
{
	return this->getHP();
}
int personagem::getMAna()
{
	return this->getMana();
}
void personagem::debitarHp(int valor)
{
	this->debitarHP(valor);
}
void personagem::debitarMAna(int valor)
{
	this->debitarMana(valor);
}
int personagem::Dano(int armFisica)
{
	return this->realizarDano(armFisica);
}
int personagem::getArmFisica()
{
	return this->getArmaduraFisica();
}
int personagem::getArmRunica()
{
	return this->getArmaduraRunica();
}
void personagem::setArmFisica(int valor)
{
	this->setArmaduraFisica(valor);
}
void personagem::setArmRunica(int valor)
{
	this->setArmaduraRunica(valor);
}
void personagem::setHp(int valor)
{
	this->setHP(valor);
}
void personagem::setMAna(int valor)
{
	this->setMAna(valor);
}