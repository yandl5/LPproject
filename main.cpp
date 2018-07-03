#include <iostream>
#include "dado.h"
#include "ataque.h"
#include "bloqueio.h"
#include "esquiva.h"
#include "esqueleto.h"
#include "viking.h"
#include "paladino.h"
#include "mago.h"
#include "assassino.h"
#include "minotauro.h"
#include <vector>
#include <memory>
#include <string>
//#include "jogador.h"
#include "monstros.h"
#include "personagem.h"
using namespace std;
int main()
{
	minotauro a;
	esqueleto b;
	vector<shared_ptr<monstro>> c;
	c.push_back(make_shared<esqueleto>());
	c.push_back(make_shared<minotauro>());
	cout<<c[0]->Dano(7)<<endl<<c[1]->getNome()<<endl;
	/*while(a.getHP()>0&&c.getHP()>0)
	{
		cin>>x;
		int vidaA,vidaB;
		vidaB=a.controleAtaque(x,c.getArmaduraFisica());
		c.debitarHP(vidaB);
		cout<<"vida do Mago: "<<c.getHP()<<endl;
		cin>>x;
		vidaA=c.controleAtaque(x,a.getArmaduraRunica());
		a.debitarHP(vidaA);
		cout<<"vida do assassino: "<<a.getHP()<<endl;
		if(a.getHP()==0)
			cout<<"Assassino morreu"<<endl;
		if(c.getHP()==0)
			cout<<"Mago morreu"<<endl;
	}*/
	return 0;
}
//g++ -Wall -pedantic -std=c++11 -o tt -O0 dado.cpp ataque.cpp bloqueio.cpp esquiva.cpp entidade.cpp assassino.cpp mago.cpp paladino.cpp viking.cpp esqueleto.cpp minotauro.cpp monstros.cpp personagem.cpp main.cpp