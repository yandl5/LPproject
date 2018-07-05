#include "assassino.h"
/**
	*@brief Criação da classe assassino.
	*@details Utilização da classe personagem como base.
	*@return Objeto assassino.
*/
assassino::assassino(string Nome):personagem(25,240,190,10,30,50,Nome),ligadoLamina(false),ligadoEsquivaPerfeita(false){}
assassino::~assassino(){cout<<endl<<"Adeus, Sophie..."<<endl;}
/**
	*@brief Método de controle de ataque.
	*@details recebe valor do usuário, armadura física, armadura mágica e hp do alvo.
	*@return dano causado.
*/
int assassino::controleAtaque(string valor,int armFisica,int armRunica,int hp)
{
	this->aplicarDebuffs();
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
	*@details Dobra o dano físico causado a custo de 5 de mana.
	*@return Dano causado.
*/
int assassino::skillUm(int armFisica,int armRunica,int hp)
{
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
/**
	*@brief Método skill dois.
	*@details Habilita +10 de dano na arma, com custo de 5 de mana por round.
	*@return Status melhorado ou dano.
*/
int assassino::skillDois(int armFisica,int armRunica,int hp)
{
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
		ligadoLamina=false;
		return this->Dano(armFisica);
	}
	else
	{
		cout<<"O assassino não tem energia e dispara um golpe simples!"<<endl;
		return this->Dano(armFisica);
	}
}
/**
	*@brief Método skillTres.
	*@details Seta esquiva como 100 ao custo de perder 20 de mana continuamente.
	*@return SetEsquiva ou dano.
*/
int assassino::skillTres(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>=20&&ligadoEsquivaPerfeita==false)
	{
		cout<<"O assassino está invalvejável, sua energia está sendo consumida!"<<endl;
		this->setEsquiv(100);
		ligadoEsquivaPerfeita=true;
		return 0;
	}
	else if(ligadoEsquivaPerfeita==true)
	{
		cout<<"A magia de ivunerabilidade acabou, o assassino se viu obrigado a atacar!"<<endl;
		this->setEsquiv(50);
		ligadoEsquivaPerfeita=false;
		return this->Dano(armFisica);
	}
	else
	{
		cout<<"O assassino não tem energia e dispara um golpe simples!"<<endl;
		return this->Dano(armFisica);
	}
}
/**
	*@brief Método aplicar debuffs.
	*@details Contabiliza a perca de mana com as skills passiva 2 e 3.
	*@return void.
*/
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