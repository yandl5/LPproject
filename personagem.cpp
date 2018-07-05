#include "personagem.h"
/**
	*@brief Criação da classe personagem.
	*@details Utilização das classes ataque,bloqueio,entidade e esquiva como base.
	*@return Objeto personagem.
*/
personagem::personagem(int valorAtaque,int hp,int mana,int armFisica,int armRunica,int perEsquiva,string Nome):
entidade(hp,mana),ataque(valorAtaque),bloqueio(armFisica,armRunica),esquiva(perEsquiva),nome(Nome){}
personagem::~personagem(){}
/**
	*@brief Método de controle de ataque.
	*@details recebe valor do usuário, armadura física, armadura mágica e hp do alvo.
	*@return dano causado.
*/
int personagem::controleAtaque(string valor,int armFisica,int armRunica,int hp)
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
	*@brief Métodos de skills para serem sobescritos, da skillUm a skillTres.
	*@details recebe valor do usuário, armadura física, armadura mágica e hp do alvo.
	*@return dano causado.
*/
int personagem::skillUm(int armFisica,int armRunica,int hp){return 0;}
int personagem::skillDois(int armFisica,int armRunica,int hp){return 0;}
int personagem::skillTres(int armFisica,int armRunica,int hp){return 0;}
/**
	*@brief Método get do nome.
	*@details
	*@return nome do personagem.
*/
string personagem::getNome()
{
	return nome;
}
/**
	*@brief Método get de ataque.
	*@details 
	*@return ataque do personagem.
*/
int personagem::getAtaque()
{
	return this->getValorAtaque();
}
/**
	*@brief Método set de valor de ataque.
	*@details 
	*@return
*/
void personagem::setAtaq(int valor)
{
	this->setValorAtaque(valor);
}
/**
	*@brief Método get de HP.
	*@details 
	*@return hp do personagem.
*/
int personagem::getHp()
{
	return this->getHP();
}
/**
	*@brief Método get de mana.
	*@details 
	*@return mana do personagem.
*/
int personagem::getMAna()
{
	return this->getMana();
}
/**
	*@brief Método de debitar HP do personagem.
	*@details faz a redução do hp baseado no valor informado.
	*@return void.
*/
void personagem::debitarHp(int valor)
{
	this->debitarHP(valor);
}
/**
	*@brief Método de debitar mana do personagem.
	*@details faz a redução do mana baseado no valor informado.
	*@return void.
*/
void personagem::debitarMAna(int valor)
{
	this->debitarMana(valor);
}
/**
	*@brief Método de causar dano do personagem.
	*@details se baseia no valor informado para aplicar dano com base na classe ataque.
	*@return valor do dano a ser causado.
*/
int personagem::Dano(int armFisica)
{
	return this->realizarDano(armFisica);
}
/**
	*@brief Método get de armadura física.
	*@details 
	*@return armadura física do personagem.
*/
int personagem::getArmFisica()
{
	return this->getArmaduraFisica();
}
/**
	*@brief Método get de armadura runica.
	*@details 
	*@return armadura runica do personagem.
*/
int personagem::getArmRunica()
{
	return this->getArmaduraRunica();
}
/**
	*@brief Método set de valor de armadura física.
	*@details 
	*@return
*/
void personagem::setArmFisica(int valor)
{
	this->setArmaduraFisica(valor);
}
/**
	*@brief Método set de armadura runica.
	*@details 
	*@return
*/
void personagem::setArmRunica(int valor)
{
	this->setArmaduraRunica(valor);
}
/**
	*@brief Método set de HP do personagem.
	*@details 
	*@return
*/
void personagem::setHp(int valor)
{
	this->setHP(valor);
}
/**
	*@brief Método set de mana do personagem.
	*@details 
	*@return
*/
void personagem::setMAna(int valor)
{
	this->setMana(valor);
}
/**
	*@brief Método set de esquiva do personagem.
	*@details 
	*@return
*/
void personagem::setEsquiv(int valor)
{
	this->setEsquiva(valor);
}
/**
	*@brief Método de esquivar do personagem.
	*@details Calcula a chance do usuário se esquivar de determinado dano.
	*@return bool valor.
*/
bool personagem::Esquivar()
{
	bool aux=false;
	aux=this->esquivar();
	return aux;
}