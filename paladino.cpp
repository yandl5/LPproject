#include "paladino.h"
/**
	*@brief Criação da classe paladino.
	*@details Utilização da classe personagem como base.
	*@return Objeto paladino.
*/
paladino::paladino(string Nome):personagem(20,600,200,20,30,5,Nome){}
paladino::~paladino(){cout<<endl<<"Foi uma boa vida, espero que consigam vingar minha morte"<<endl;}
/**
	*@brief Método de controle de ataque.
	*@details recebe valor do usuário, armadura física, armadura mágica e hp do alvo.
	*@return dano causado.
*/
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
/**
	*@brief Método skillUm.
	*@details Dano baseado na armadura física e mágica do alvo a custo de 30 de mana.
	*@return Dano causado.
*/
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
/**
	*@brief Método skill dois.
	*@details Dano simples baseado na armadura física, custa 10 de mana.
	*@return Dano causado.
*/
int paladino::skillDois(int armFisica,int armRunica,int hp)
{
	if(this->getMAna()>=10)
	{
		this->debitarMAna(10);
		cout<<"O paladino disfere um poderoso golpe mágico contra o monstro!"<<endl;
		return this->Dano(armFisica)*3;
		return this->Dano(armFisica)*2;
	}
	else
	{
		cout<<"O paladino usa um ataque simples, pois está sem energia!"<<endl;
		this->Dano(armFisica);
		return 0;
	}
}
/**
	*@brief Método skillTres.
	*@details Aumenta o dano da arma em +10,custa 10 de mana.
	*@return Status melhorado.
*/
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
/**
	*@brief Método help.
	*@details Informa ao jogador detalhes das skills.
	*@return void.
*/
void paladino::help()
{
	cout<<"Comandos básicos:"<<endl;
	cout<<"1:Ataque básico!"<<endl;
	cout<<"2:Luz primordial(golpe baseado na armadura física e mágica do alvo)!"<<endl;
	cout<<"3:Fé de ferro(similar a luz primordial porém baseado na armadura física com multiplicador maior)!"<<endl;
	cout<<"4:Glória domini(aumenta os status da arma do paladino)"<<endl;
	cout<<endl;
}