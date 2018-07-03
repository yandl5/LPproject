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
#include "monstros.h"
#include "personagem.h"
#include "combate.h"
<<<<<<< HEAD
#include "teste.h"
=======
>>>>>>> f82a0e35f2ee45fd59b3cb78eab633cec36e21a0
using namespace std;
int main()
{
	vector<shared_ptr<personagem>> c;
	int x=0;
	c.push_back(make_shared<viking>("viking"));
	vector<shared_ptr<monstro>> b;
	b.push_back(make_shared<esqueleto>());
<<<<<<< HEAD
	vector<shared_ptr<paladino>> a;
	a.push_back(make_shared<paladino>("joao"));
	cout<<x<<endl;
	teste<vector<shared_ptr<paladino>>> z;
	z.testeUm(a,b,0);
=======
	paladino a("joaozin");
	x=a.skillDois(5,3,80);
	cout<<x<<endl;
>>>>>>> f82a0e35f2ee45fd59b3cb78eab633cec36e21a0
	//combate(c,b,0);
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