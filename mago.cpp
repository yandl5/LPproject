#include "mago.h"
mago::mago(string Nome):personagem(5,200,600,20,50,10,Nome){}
mago::~mago(){}
int mago::skillUm(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>=30)
	{
		cout<<"O mago dispara uma cortina de gelo que provoca dano baseado na armadura runica do alvo"<<endl;
		this->debitarMAna(30);
		return armRunica*3;
	}
	else
	{
		cout<<"O mago está sem energia, então opta por um golpe simples de faísca!"<<endl;
		return 20;
	}
}
int mago::skillDois(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>=100)
	{
		cout<<"A magia mais forte foi conjurada, agora seus inimigos vão testemunhar o inferno na terra!"<<endl;
		this->debitarMAna(100);
		return (armRunica+(this->getMAna()/2)+50);
	}
	else
	{
		cout<<"O mago não tem energias, a conjuração do inferno o deixou exposto, sua vida foi drenada!"<<endl;
		this->debitarHp(100);
		return 0;
	}
}
int mago::skillTres(int armFisica,int armRunica,int hp)
{
	int y;
	y=this->getMAna();
	this->setHp(this->getHp()+(y/2));
	this->setMAna(y/2);
	cout<<"O mago se envolve numa barreira espiritual que consome boa parte de sua energia"<<endl;
	return 0;
}