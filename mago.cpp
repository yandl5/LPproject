#include "mago.h"
/**
	*@brief Criação da classe mago.
	*@details Utilização da classe personagem como base.
	*@return Objeto mago.
*/
mago::mago(string Nome):personagem(5,200,600,20,50,10,Nome){}
mago::~mago(){cout<<endl<<"No final das contas não sou tão covarde assim não é mesmo? Queria viver mais"<<endl;}
/**
	*@brief Método de controle de ataque.
	*@details recebe valor do usuário, armadura física, armadura mágica e hp do alvo.
	*@return dano causado.
*/
int mago::controleAtaque(string valor,int armFisica,int armRunica,int hp)
{
	int dano=0;
	if(valor=="1")
	{
		cout<<"Golpe simples de faísca!"<<endl;
		dano=20;
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
	*@details Aplica um dano baseado na armadura mágica, custa 30 de mana, ou dispara golpe simples.
	*@return Dano causado.
*/
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
/**
	*@brief Método skill dois.
	*@details Skill de dano massivo baseado na mana, armadura rúnica e valor constante.
	*@return Dano causado.
*/
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
/**
	*@brief Método skill três.
	*@details skill que aumenta o hp baseado na sua mana atual.
	*@return Status melhorado.
*/
int mago::skillTres(int armFisica,int armRunica,int hp)
{
	int y;
	y=this->getMAna();
	this->setHp(this->getHp()+(y/2));
	this->setMAna(y/2);
	cout<<"O mago se envolve numa barreira espiritual que consome boa parte de sua energia"<<endl;
	return 0;
}