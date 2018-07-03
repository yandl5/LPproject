#include "combate.h"
bool combate(vector<shared_ptr<personagem>> A,vector<shared_ptr<monstro>> it,int i)
{
	cout<<"Você avistou um "<<it[i]->getNome()<<", ele veio em sua direção, lutar é sua única opção."<<endl;
	string auxiliar;
	int valorDano=0;
	while(A[0]->getHp()>0&&it[i]->getHp()>0)
	{
		cout<<"Sua vida: "<<A[0]->getHp()<<"|"<<"Sua mana: "<<A[0]->getMAna()<<endl;
		cout<<"Vida do monstro: "<<it[i]->getHp()<<endl;
		cout<<"Escolha sua skill entre 1 e 4"<<endl;
		cin>>auxiliar;
		valorDano=A[0]->controleAtaque(auxiliar,it[i]->getArmFisica(),it[i]->getArmRunica(),it[i]->getHp());
		it[i]->debitarHp(valorDano);
		valorDano=it[i]->realizarAtaque(A[0]->getArmFisica(),A[0]->getArmRunica(),A[0]->getHp());
		A[0]->debitarHP(valorDano);
	}
	if(A[0]->getHp()==0)
	{
		return false;
	}
	else
	{
		return true;
	}
}