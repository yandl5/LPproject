#include "paladino.h"
#define MAXHP 400
#define MAXSP 200
paladino::paladino(string nome):entidade(400,200),ataque(15),bloqueio(15,30),esquiva(5), Nome(nome){}
paladino::~paladino(){}
void paladino::meditar()
{
	int mana=50,hp=30;
	if((this->getMana()+mana)<=MAXSP)
	{
		this->setMana(this->getMana()+mana);
	}
	else
	{
		this->setMana(MAXSP);
	}
	if((this->getHP()+hp)<=MAXHP)
	{
		this->setHP(this->getHP()+HP);
	}
	else
	{
		this->setHP(MAXHP);
	}
	cout<<"O paladino meditou e aumentou sua concentração ignorando ferimentos ou cansaço!"<<endl;
	return;
}
int paladino::gloriaDivina(int valor)
{
	int x=0;
	if(this->getMana()>=10)
	{
		this->debitarMana(10);
		cout<<"O paladino desfere um poderoso golpe mágico contra o monstro!"<<endl;
		return this->realizarDano(valor)*2;
	}
	else
	{
		cout<<"O paladino se ver obrigado a meditar, pois está sem energia"<<endl;
		this->meditar();
	}
}
void paladino::encantarArma()
{
	if(this->getMana()>=10)
	{
		cout<<"O paladino encantou a sua arma"<<endl;
		this->setValorAtaque(this->getValorAtaque()+10);
	}
	else
	{
		cout<<"O paladino se ver obrigado a meditar, pois está sem energia"<<endl;
		this->meditar();
	}
}
int paladino::controleAtaque(int armRunica)
{
	int dano=0;
	if(valor=="1")
	{
		this->meditar();
	}
	else if(valor=="2")
	{
		dano=this->gloriaDivina(armRunica);
	}
	else if(valor=="3")
	{
		this->encantarArma();
	}
	return dano;
}