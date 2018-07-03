#include "viking.h"
viking::viking(string Nome):personagem(35,280,160,10,15,20,Nome){}
viking::~viking(){}
int viking::skillUm(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>5)
	{
		cout<<"O viking arremessou seu machado na critura ignorando completamente sua defesa!"<<endl;
		this->debitarMAna(5);
		return 20;
	}
	else
	{
		cout<<"O viking não tem energia para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->Dano(armFisica);
	}
}
int viking::skillDois(int armFisica,int armRunica,int hp)
{
	if(this->getHp()>30)
	{
		cout<<"O viking usa o peso do seu corpo sem se preocupar com nada, e causa dano ao monstro!"<<endl;
		this->debitarHp(30);
		return (this->Dano(armFisica)*2);
	}
	else
	{
		cout<<"O viking não tem forças para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->Dano(armFisica);
	}
}
int viking::skillTres(int armFisica,int armRunica,int hp)
{
	if(this->getHp()>150)
	{
		cout<<"O viking prepara um golpe letal que mata seu alvo e consome boa parte de sua vida"<<endl;
		this->debitarHp(150);
		return hp;
	}
	else
	{
		cout<<"O viking não tem forças para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->Dano(armFisica);
	}
}