#include "mago.h"
mago::mago(string nome):entidade(200,400),ataque(0),bloqueio(10,50),esquiva(5), Nome(nome){}
mago::~mago(){}
int mago::faisca()
{
	cout<<"O mago disparou uma faísca no vento que provocou dano aos seus inimigos"<<endl;
	return 20;
}
int mago::geloPerpetuo(int valor)
{
	if(this->getMana()>=30)
	{
		cout<<"O mago dispara uma cortina de gelo que provoca dano baseado na armadura runica do alvo"<<endl;
		this->debitarMana(30);
		return valor*3;
	}
	else
	{
		cout<<"O mago está sem energia, então opta por um golpe simples de faísca!"<<endl;
		return 20;
	}
}
int mago::inferno(int valor)
{
	if(this->getMana()>=100)
	{
		cout<<"A magia mais forte foi conjurada, agora seus inimigos vão testemunhar o inferno na terra!"<<endl;
		this->debitarMana(100);
		return (valor+(this->getMana()/2)+50);
	}
	else
	{
		cout<<"O mago não tem energias, a conjuração do inferno o deixou exposto, sua vida foi drenada!"<<endl;
		this->debitarHP(100);
		return 0;
	}
}
void mago::protectMana()
{
	int y;
	y=this->getMana();
	this->setHP(this->getHP()+(y/2));
	this->setMana(y/2);
	cout<<"O mago se envolve numa barreira espiritual que consome boa parte de sua energia"<<endl;
}
int mago::controleAtaque(string valor,int armRunica)
{
	int dano=0;
	if(valor=="1")
	{
		dano=this->faisca();
	}
	else if(valor=="2")
	{
		dano=this->geloPerpetuo(armRunica);
	}
	else if(valor=="3")
	{
		dano=this->inferno(armRunica);
	}
	else if(valor=="4")
	{
		this->protectMana();
	}
	return dano;
}