#include "monstros.h"
monstro::monstro(int valorAtaque,int hp,int mana,int armFisica,int armRunica,int perEsquiva,string Nome,int Tipo):
entidade(hp,mana),ataque(valorAtaque),bloqueio(armFisica,armRunica),esquiva(perEsquiva),nome(Nome),tipo(Tipo),sorteio(20){}
monstro::~monstro(){}
int monstro::realizarAtaque(int armFisica, int armRunica,int hp)
{
	int x=this->getSorteio();
	int valor=0;
	if(x>=1&&x<=8)
	{
		cout<<"O "<<this->getNome()<<" utilizou um golpe simples!"<<endl;
		valor=this->Dano(armFisica);
		return valor;
	}
	else if(x>=9&&x<=14)
	{
		cout<<"O "<<this->getNome()<<" utilizou um golpe mágico!"<<endl;
		valor=this->Dano(armRunica);
		return valor;
	}
	else if(x>=15&&x<=18)
	{
		cout<<"O "<<this->getNome()<<" te pegou desprevinido!"<<endl;
		if(getMAna()>=10)
		{
			valor=this->Dano(armFisica)+20;
		}
		else
		{
			valor=this->Dano(armFisica);
		}
		return valor;
	}
	else
	{
		cout<<"O "<<this->getNome()<<" te atingiu de forma crítica!"<<endl;
		if(getMAna()>=18)
		{
			valor=this->Dano(armFisica+armRunica)+20;
		}
		else
		{
			valor=this->Dano(armFisica);
		}
		return valor;
	}
}
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
bool monstro::Esquivar()
{
	bool aux=false;
	aux=this->esquivar();
	return aux;
}