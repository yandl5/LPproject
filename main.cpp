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
using namespace std;
int main()
{
	esqueleto b;
	viking a("Artur viadin");
	string x;
	mago c("Yan master");
	while(a.getHP()>0&&c.getHP()>0)
	{
		cin>>x;
		int vidaA,vidaB;
		vidaB=a.controleAtaque(x,c.getArmaduraFisica(),c.getHP());
		c.debitarHP(vidaB);
		cout<<"vida do Mago: "<<c.getHP()<<endl;
		cin>>x;
		vidaA=c.controleAtaque(x,a.getArmaduraRunica());
		a.debitarHP(vidaA);
		cout<<"vida do Viking: "<<a.getHP()<<endl;
		if(a.getHP()==0)
			cout<<"Viking morreu"<<endl;
		if(c.getHP()==0)
			cout<<"Mago morreu"<<endl;
	}
	return 0;
}
//g++ -Wall -pedantic -std=c++11 -o tt -O0 ataque.cpp bloqueio.cpp dado.cpp esquiva.cpp entidade.cpp esqueleto.cpp viking.cpp paladino.cpp mago.cpp assassino.cpp main.cpp