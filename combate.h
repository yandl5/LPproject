#ifndef COMBATE
#define COMBATE
#include "paladino.h"
#include "mago.h"
#include "assassino.h"
#include "viking.h"
#include "esqueleto.h"
#include "ghoul.h"
#include "tycondrius.h"
#include "verdugo.h"
#include "minotauro.h"
#include <memory>
#include <vector>
#include "monstros.h"
#include "personagem.h"
#include <string>
#include <iostream>
#include "excecao.h"
using namespace std;
template<typename T>
bool combate(T A,vector<shared_ptr<monstro>> it,int i);
/**
	*@brief Função combate.
	*@details Função que recebe um template da classe personagem, um vector de monstros e um índice, faz-se o combate entre os dois primeiros argumentos
	*@details de modo que se estabeleça o vencedor retorna true caso o personagem ganho e falso caso contrário.
	*@return Bool valor.
*/
template<typename T>
bool combate(T A,vector<shared_ptr<monstro>> it,int i)
{
	if(it[i]->getNome()=="Tycondrius")
	{
		cout<<"Você avistou Tycondrius, a besta suprema, não há escapatória, mas próximo a fera você ver a cripta, e manda a carta ao rei"<<endl<<endl;
	}
	else
	{
		cout<<"Você avistou um "<<it[i]->getNome()<<", ele veio em sua direção, lutar é sua única opção."<<endl;
	}
	string auxiliar;
	int valorDano=0;
	bool esquiva=false;
	while(A[0]->getHp()>0&&it[i]->getHp()>0)
	{
		cout<<"Sua vida: "<<A[0]->getHp()<<" | "<<"Sua mana: "<<A[0]->getMAna()<<endl;
		cout<<"Vida do monstro: "<<it[i]->getHp()<<endl;
		cout<<"Escolha sua skill entre 1 e 4"<<endl;
		cin>>auxiliar;
		try
		{
			if(auxiliar!="1"&&auxiliar!="2"&&auxiliar!="3"&&auxiliar!="4")
			{
				throw ArgumentosErrados();
			}
		}
		catch(ArgumentosErrados &ex)
		{
			cout<<endl;
			cerr<<ex.what()<<endl;
			auxiliar="1";
		}
		cout<<endl;
		esquiva=it[i]->Esquivar();
		if(esquiva==false){
			valorDano=A[0]->controleAtaque(auxiliar,it[i]->getArmFisica(),it[i]->getArmRunica(),it[i]->getHp());
			it[i]->debitarHp(valorDano);
		}
		else
			cout<<"O "<<it[i]->getNome()<<" se esquivou de seu ataque"<<endl;
		esquiva=A[0]->Esquivar();
		if(esquiva==false){
			valorDano=it[i]->realizarAtaque(A[0]->getArmFisica(),A[0]->getArmRunica(),A[0]->getHp());
			A[0]->debitarHP(valorDano);
		}
		else
		{
			cout<<"Você se esquivou do ataque inimigo"<<endl;
		}
	}
	cout<<endl;
	if(A[0]->getHp()==0)
	{
		return false;
	}
	else
	{
		cout<<"Você eliminou o "<<it[i]->getNome()<<"!"<<endl<<endl;
		return true;
	}
}
#endif