#include "assassino.h"
assassino::assassino(string nome):entidade(260,130),ataque(10),bloqueio(5,5),esquiva(50), Nome(nome),ligadoLamina(false),ligadoEsquivaPerfeita(false){}
assassino::~assassino(){}
int assassino::ataqueDuplo(int valor)
{
	if(this->getMana()>=5)
	{
		cout<<"O assassino desfere dois golpes no mesmo movimento"<<endl;
		return (this->realizarDano(valor)*2);
	}
	else
	{
		cout<<"O assassino tentou surpreender seu inimigo porém não conseguiu, ataque simples!"<<endl;
		return this->realizarDano(valor);
	}
}
int assassino::laminaVenenosa(int valor)
{
	if(this->getMana()>=5&&ligadoLamina==false)
	{
		cout<<"O assassino embebe sua lâmina em veneno, seus golpes físicos causarão mais dano!"<<endl;
		this->setValorAtaque(this->getValorAtaque()+10);
		ligadoLamina=true;
		return 0;
	}
	else if(ligadoLamina==true)
	{
		cout<<"O veneno foi desativado e o assassino disparou um ataque!"<<endl;
		this->setValorAtaque(this->getValorAtaque()-10);
		return this->realizarDano(valor);
	}
	else
	{
		cout<<"O assassino não tem energia e dispara um golpe simples!"<<endl;
		return this->realizarDano(valor);
	}
}
int assassino::esquivaPerfeita(int valor)
{
	if(this->getMana()>=20&&ligadoEsquivaPerfeita==false)
	{
		cout<<"O assassino está invalvejável, sua energia está sendo consumida!"<<endl;
		this->setEsquiva(100);
		return 0;
	}
	else if(ligadoEsquivaPerfeita==true)
	{
		cout<<"A magia de ivunerabilidade acabou, o assassino se viu obrigado a atacar!"<<endl;
		this->setEsquiva(50);
		return this->realizarDano(valor);
	}
	else
	{
		cout<<"O assassino não tem energia e dispara um golpe simples!"<<endl;
		return this->realizarDano(valor);
	}
}
string assassino::getNome()
{
	return Nome;
}
void assassino::aplicarDebuffs()
{
	if(this->getMana()<20&&ligadoEsquivaPerfeita==true)
	{
		this->setEsquiva(50);
		ligadoEsquivaPerfeita=false;
		cout<<"Esquiva perfeita desabilitada"<<endl;
	}
	else if(this->getMana()<5&&ligadoLamina==true)
	{
		this->setValorAtaque(this->getValorAtaque()-10);

		cout<<"Sua lâmina não está mais envenenada"<<endl;
	}
	else if(this->getMana()>20&&ligadoEsquivaPerfeita==true)
	{
		this->debitarMana(20);
	}
	else if(this->getMana()>5&&ligadoLamina==true)
	{
		this->debitarMana(5);
	}
}
int assassino::controleAtaque(string valor,int armFisica)
{
	this->aplicarDebuffs();
	int dano=0;
	if(valor=="1")
	{
		cout<<"O assassino dispara um ataque simples!"<<endl;
		dano=this->realizarDano(armFisica);
	}
	else if(valor=="2")
	{
		dano=this->ataqueDuplo(armFisica);
	}
	else if(valor=="3")
	{
		dano=this->laminaVenenosa(armFisica);
	}
	else if(valor=="4")
	{
		dano=this->esquivaPerfeita(armFisica);
	}
	return dano;
}