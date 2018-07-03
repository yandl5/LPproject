#include "paladino.h"
#define MAXHP 400
#define MAXSP 200
#define MAXatack 15
paladino::paladino(string Nome):personagem(25,400,200,20,30,5,Nome){}
paladino::~paladino(){}
int paladino::skillUm(int armFisica,int armRunica,int hp)
{
	int mana=50,Hp=30;
	if((this->getMAna()+mana)<=MAXSP)
	{
		this->setMAna(this->getMana()+mana);
	}
	else
	{
		this->setMAna(MAXSP);
	}
	if((this->getHp()+Hp)<=MAXHP)
	{
		this->setHp(this->getHp()+Hp);
	}
	else
	{
		this->setHp(MAXHP);
	}
	cout<<"O paladino meditou e aumentou sua concentração ignorando ferimentos ou cansaço!"<<endl;
	return 0;
}
int paladino::skillDois(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>=10)
	{
		this->debitarMAna(10);
		cout<<"O paladino disfere um poderoso golpe mágico contra o monstro!"<<endl;
		return this->Dano(armFisica)*2;
	}
	else
	{
		cout<<"O paladino usa um ataque simples, pois está sem energia!"<<endl;
		this->Dano(armFisica);
		return 0;
	}
}
int paladino::skillTres(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>=10)
	{
		cout<<"O paladino encantou a sua arma"<<endl;
		this->setAtaq(this->getAtaque()+10);
	}
	else
	{
		cout<<"O paladino usa um ataque simples, pois está sem energia!"<<endl;
		this->Dano(armFisica);
	}
	return 0;
}