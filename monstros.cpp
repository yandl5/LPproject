#include "monstros.h"
monstro::monstro(int valorAtaque,int hp,int mana,int armFisica,int armRunica,int perEsquiva,string Nome,int Tipo):
entidade(hp,mana),ataque(valorAtaque),bloqueio(armFisica,armRunica),esquiva(perEsquiva),nome(Nome),tipo(Tipo),sorteio(6){}
monstro::~monstro(){}
int monstro::realizarAtaque(int armFisica, int armRunica,int hp)
{
	int x=this->getSorteio();
	int valor=0;
	if(x==1)
	{
		valor=this->skillUm(armFisica,armRunica,hp);
		return valor;
	}
	else if(x==2)
	{
		valor=this->skillDois(armFisica,armRunica,hp);
		return valor;
	}
	else
	{
		cout<<"O "<<this->getNome()<<" disparou um ataque simples!"<<endl;
		valor=this->Dano(armFisica);
		return valor;
	}
}
int monstro::skillUm(int armFisica,int armRunica,int hp){return 0;}
int monstro::skillDois(int armFisica,int armRunica,int hp){return 0;}
string monstro::getNome()
{
	return nome;
}
int monstro::getHp()
{
	return this->getHP();
}
int monstro::getMAna()
{
	return this->getMana();
}
void monstro::debitarHp(int valor)
{
	this->debitarHP(valor);
}
void monstro::debitarMAna(int valor)
{
	this->debitarMana(valor);
}
int monstro::getSorteio()
{
	return sorteio.Jogar();
}
int monstro::Dano(int armFisica)
{
	return this->realizarDano(armFisica);
}
int monstro::getArmFisica()
{
	return this->getArmaduraFisica();
}
int monstro::getArmRunica()
{
	return this->getArmaduraRunica();
}
void monstro::setArmFisica(int valor)
{
	this->setArmaduraFisica(valor);
}
void monstro::setArmRunica(int valor)
{
	this->setArmaduraRunica(valor);
}