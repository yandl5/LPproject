#include "paladino.h"
#define MAXHP 400
#define MAXSP 200
#define MAXatack 15
paladino::paladino(string Nome):personagem(25,400,200,20,30,5,Nome){}
paladino::~paladino(){cout<<"Foi uma boa vida, espero que consigam vingar minha morte"<<endl;}
int paladino::controleAtaque(string valor,int armFisica,int armRunica,int hp)
{
	int dano=0;
	if(valor=="1")
	{
		cout<<"O paladino usa um ataque simples!"<<endl;
		dano=this->Dano(armFisica);
	}
	if(valor=="2")
	{
		dano=this->skillUm(armFisica,armRunica,hp);
	}
	else if(valor=="3")
	{
		dano=this->skillDois(armFisica,armRunica,hp);
	}
	else if(valor=="4")
	{
		dano=this->skillTres(armFisica,armRunica,hp);
	}
	return dano;
}
int paladino::skillUm(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>=30)
	{
		this->debitarMAna(10);
		cout<<"O paladino disfere um golpe baseado na armadura do monstro!"<<endl;
		return this->Dano(armFisica+armRunica)*2;
	}
	else
	{
		cout<<"O paladino usa um ataque simples, pois está sem energia!"<<endl;
		this->Dano(armFisica);
		return 0;
	}
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
		this->debitarMAna(10);
	}
	else
	{
		cout<<"O paladino usa um ataque simples, pois está sem energia!"<<endl;
		this->Dano(armFisica);
	}
	return 0;
}