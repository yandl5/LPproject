#include "minotauro.h"
#include <iostream>
minotauro::minotauro():monstro(15,200,50,15,20,10,"Minotauro",1){}
minotauro::~minotauro(){}
int minotauro::skillUm(int armFisica,int armRunica,int hp)
{
	int x=0;
	if(this->getMAna()>=10)
	{
		x=this->Dano(armFisica);
		x=x+20;
		cout<<"O Minotauro avançou e atacou com seus chifres!"<<endl;
		if(x<0)
		{
			x=5;
		}
		this->debitarMAna(10);
	}
	else
	{
		x=this->Dano(armFisica);
		cout<<"O Minotauro causou dano em uma investida simples!"<<endl;
	}
	return x;
}
int minotauro::skillDois(int armFisica,int armRunica,int hp)
{
	int x=0;
	if(this->getMAna()>=15)
	{
		x=this->Dano(armFisica)*3;
		cout<<"O Minotauro atropelou seu alvo!"<<endl;
	}
	else
	{
		cout<<"O Minotauro causou dano em uma investida simples!"<<endl;
		x=this->Dano(armFisica);
	}
	return x;
}