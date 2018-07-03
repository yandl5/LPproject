#include "esqueleto.h"
#include <iostream>
esqueleto::esqueleto():monstro(5,75,40,5,7,5,"Esqueleto",1){}
esqueleto::~esqueleto(){}
int esqueleto::skillUm(int armFisica,int armRunica,int hp)
{
	int x=0;
	if(this->getMAna()>=10)
	{
		x=this->Dano(armRunica);
		x=x+(this->getMAna()/2);
		cout<<"O esqueleto disparou sua lâmina num corte sombrio!"<<endl;
		if(x<0)
		{
			x=5;
		}
		this->debitarMAna(10);
	}
	else
	{
		x=this->Dano(armFisica);
		cout<<"O esqueleto disparou um ataque simples!"<<endl;
	}
	return x;
}
int esqueleto::skillDois(int armFisica,int armRunica,int hp)
{
	int x,y;
	if(this->getMAna()>=15)
	{
		x=(this->getArmFisica())+5;
		y=(this->getArmRunica())+5;
		this->debitarMana(15);
		this->setArmRunica(y);
		this->setArmFisica(x);
		cout<<"O esqueleto se cobriu de aura sombria, seus golpes causarão menos dano!"<<endl;
	}
	else
	{
		cout<<"O esqueleto disparou um ataque simples!"<<endl;
		this->Dano(armFisica);
	}
	return 0;
}