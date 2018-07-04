<<<<<<< HEAD
#ifndef FASEUM
#define FASEUM
=======
>>>>>>> 53bf2a491f42bfbaf10d350882e3476217e80d0f
#include "monstros.h"
#include "personagem.h"
#include "mago.h"
#include "esqueleto.h"
#include "paladino.h"
#include "minotauro.h"
#include "assassino.h"
#include "viking.h"
<<<<<<< HEAD
#include "combate.h"
template <typename T>
class fases
=======
template <typename T>
class teste
>>>>>>> 53bf2a491f42bfbaf10d350882e3476217e80d0f
{
public:
	teste();
	~teste();
	bool testeUm(T a,vector<shared_ptr<monstro>> b,int i);
};
template<typename T>
teste<T>::teste(){}
template<typename T>
teste<T>::~teste(){}
template <typename T>
bool teste<T>::testeUm(T a, vector<shared_ptr<monstro>> b,int i)
{	
<<<<<<< HEAD
	combate<T>(a,b,i);
	return true;
}
#endif
=======
	int x=0;
	x=a[i]->skillDois(5,3,80);
	cout<<x<<endl;
	return true;
}
>>>>>>> 53bf2a491f42bfbaf10d350882e3476217e80d0f
