#include "assassino.h"
assassino::assassino(string Nome):personagem(25,400,200,20,30,5,Nome),ligadoLamina(false),ligadoEsquivaPerfeita(false){}
assassino::~assassino(){}
int assassino::skillUm(int armFisica,int armRunica,int hp)
{
	this->aplicarDebuffs();
	if(this->getMAna()>=5)
	{
		cout<<"O assassino desfere dois golpes no mesmo movimento"<<endl;
		return (this->Dano(armFisica)*2);
	}
	else
	{
		cout<<"O assassino tentou surpreender seu inimigo porém não conseguiu, ataque simples!"<<endl;
		return this->Dano(armFisica);
	}
}
int assassino::skillDois(int armFisica,int armRunica,int hp)
{
	this->aplicarDebuffs();
	if(this->getMAna()>=5&&ligadoLamina==false)
	{
		cout<<"O assassino embebe sua lâmina em veneno, seus golpes físicos causarão mais dano!"<<endl;
		this->setAtaq(this->getAtaque()+10);
		ligadoLamina=true;
		return 0;
	}
	else if(ligadoLamina==true)
	{
		cout<<"O veneno foi desativado e o assassino disparou um ataque!"<<endl;
		this->setAtaq(this->getAtaque()-10);
		return this->Dano(armFisica);
	}
	else
	{
		cout<<"O assassino não tem energia e dispara um golpe simples!"<<endl;
		return this->Dano(armFisica);
	}
}
int assassino::skillTres(int armFisica,int armRunica,int hp)
{
	this->aplicarDebuffs();
	if(this->getMAna()>=20&&ligadoEsquivaPerfeita==false)
	{
		cout<<"O assassino está invalvejável, sua energia está sendo consumida!"<<endl;
		this->setEsquiv(100);
		return 0;
	}
	else if(ligadoEsquivaPerfeita==true)
	{
		cout<<"A magia de ivunerabilidade acabou, o assassino se viu obrigado a atacar!"<<endl;
		this->setEsquiv(50);
		return this->Dano(armFisica);
	}
	else
	{
		cout<<"O assassino não tem energia e dispara um golpe simples!"<<endl;
		return this->Dano(armFisica);
	}
}
void assassino::aplicarDebuffs()
{
	if(this->getMAna()<20&&ligadoEsquivaPerfeita==true)
	{
		this->setEsquiv(50);
		ligadoEsquivaPerfeita=false;
		cout<<"Esquiva perfeita desabilitada"<<endl;
	}
	else if(this->getMAna()<5&&ligadoLamina==true)
	{
		this->setValorAtaque(this->getValorAtaque()-10);

		cout<<"Sua lâmina não está mais envenenada"<<endl;
	}
	else if(this->getMAna()>20&&ligadoEsquivaPerfeita==true)
	{
		this->debitarMAna(20);
	}
	else if(this->getMAna()>5&&ligadoLamina==true)
	{
		this->debitarMAna(5);
	}
}