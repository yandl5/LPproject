#include "viking.h"
/**
	*@brief Criação da classe viking.
	*@details Utilização da classe personagem como base.
	*@return Objeto viking.
*/
viking::viking(string Nome):personagem(35,590,70,20,15,20,Nome){}
viking::~viking(){cout<<endl<<"Espero que aquele maldito cumpra com seu acordo!"<<endl;}
/**
	*@brief Método de controle de ataque.
	*@details recebe valor do usuário, armadura física, armadura mágica e hp do alvo.
	*@return dano causado.
*/
int viking::controleAtaque(string valor,int armFisica,int armRunica,int hp)
{
	int dano=0;
	if(valor=="1")
	{
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
/**
	*@brief Método skillUm.
	*@details Dano fixo de 35, custo de mana 5.
	*@return Dano causado.
*/
int viking::skillUm(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>5)
	{
		cout<<"O viking arremessou seu machado na critura ignorando completamente sua defesa!"<<endl;
		this->debitarMAna(5);
		return 35;
	}
	else
	{
		cout<<"O viking não tem energia para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->Dano(armFisica);
	}
}
/**
	*@brief Método skillDois.
	*@details Dano baseado na armadura física, custo de 30 de hp.
	*@return Dano causado.
*/
int viking::skillDois(int armFisica,int armRunica,int hp)
{
	if(this->getHp()>20)
	{
		cout<<"O viking usa o peso do seu corpo sem se preocupar com nada, e causa dano ao monstro!"<<endl;
		this->debitarHp(20);
		return (this->Dano(armFisica)*3);
	}
	else
	{
		cout<<"O viking não tem forças para esse golpe, ele hesita e dispara um ataque normal"<<endl;
		return this->Dano(armFisica);
	}
}
/**
	*@brief Método skillUm.
	*@details Dano que se acertar mata instantâneamente o alvo, custa 150 de hp.
	*@return Dano causado.
*/
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