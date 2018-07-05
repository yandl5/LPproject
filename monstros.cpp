#include "monstros.h"
/**
	*@brief Criação da classe monstro.
	*@details Utilização das classes ataque,bloqueio,entidade e esquiva como base.
	*@return Objeto monstro.
*/
monstro::monstro(int valorAtaque,int hp,int mana,int armFisica,int armRunica,int perEsquiva,string Nome,int Tipo):
entidade(hp,mana),ataque(valorAtaque),bloqueio(armFisica,armRunica),esquiva(perEsquiva),nome(Nome),tipo(Tipo),sorteio(20){}
monstro::~monstro(){}
/**
	*@brief Método de controle de ataque.
	*@details recebe valor do usuário, armadura física, armadura mágica e hp do alvo.
	*@return dano causado.
*/
int monstro::realizarAtaque(int armFisica, int armRunica,int hp)
{
	int x=this->getSorteio();
	int valor=0;
	if(x>=1&&x<=8)
	{
		cout<<"O "<<this->getNome()<<" utilizou um golpe simples!"<<endl;
		valor=this->Dano(armFisica);
		return valor;
	}
	else if(x>=9&&x<=14)
	{
		cout<<"O "<<this->getNome()<<" utilizou um golpe mágico!"<<endl;
		valor=this->Dano(armRunica);
		return valor;
	}
	else if(x>=15&&x<=18)
	{
		cout<<"O "<<this->getNome()<<" te pegou desprevinido!"<<endl;
		if(getMAna()>=10)
		{
			valor=this->Dano(armFisica)+20;
		}
		else
		{
			valor=this->Dano(armFisica);
		}
		return valor;
	}
	else
	{
		cout<<"O "<<this->getNome()<<" te atingiu de forma crítica!"<<endl;
		if(getMAna()>=18)
		{
			valor=this->Dano(armFisica+armRunica)+20;
		}
		else
		{
			valor=this->Dano(armFisica);
		}
		return valor;
	}
}
/**
	*@brief Método get do nome.
	*@details
	*@return nome do monstro.
*/
string monstro::getNome()
{
	return nome;
}
/**
	*@brief Método get de HP.
	*@details 
	*@return hp do monstro.
*/
int monstro::getHp()
{
	return this->getHP();
}
/**
	*@brief Método get de mana.
	*@details 
	*@return mana do monstro.
*/
int monstro::getMAna()
{
	return this->getMana();
}
/**
	*@brief Método de debitar HP do monstro.
	*@details faz a redução do hp baseado no valor informado.
	*@return void.
*/
void monstro::debitarHp(int valor)
{
	this->debitarHP(valor);
}
/**
	*@brief Método de debitar mana do monstro.
	*@details faz a redução do mana baseado no valor informado.
	*@return void.
*/
void monstro::debitarMAna(int valor)
{
	this->debitarMana(valor);
}
/**
	*@brief Método de sorteia um dado D20.
	*@details faz o sorteio do valor para o método controle de ataque.
	*@return valor de 1 a 20.
*/
int monstro::getSorteio()
{
	return sorteio.Jogar();
}
/**
	*@brief Método de causar dano do monstro.
	*@details se baseia no valor informado para aplicar dano com base na classe ataque.
	*@return valor do dano a ser causado.
*/
int monstro::Dano(int armFisica)
{
	return this->realizarDano(armFisica);
}
/**
	*@brief Método get de armadura física.
	*@details 
	*@return armadura física do monstro.
*/
int monstro::getArmFisica()
{
	return this->getArmaduraFisica();
}
/**
	*@brief Método get de armadura runica.
	*@details 
	*@return armadura runica do monstro.
*/
int monstro::getArmRunica()
{
	return this->getArmaduraRunica();
}
/**
	*@brief Método set de valor de armadura física.
	*@details 
	*@return
*/
void monstro::setArmFisica(int valor)
{
	this->setArmaduraFisica(valor);
}
/**
	*@brief Método set de armadura runica.
	*@details 
	*@return
*/
void monstro::setArmRunica(int valor)
{
	this->setArmaduraRunica(valor);
}
/**
	*@brief Método de esquivar do monstro.
	*@details Calcula a chance do usuário se esquivar de determinado dano.
	*@return bool valor.
*/
bool monstro::Esquivar()
{
	bool aux=false;
	aux=this->esquivar();
	return aux;
}