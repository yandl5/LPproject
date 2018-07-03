#include "monstros.h"
#include "personagem.h"
#include "mago.h"
#include "esqueleto.h"
#include "paladino.h"
#include "minotauro.h"
#include "assassino.h"
#include "viking.h"
template <typename T>
class teste
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
	int x=0;
	x=a[i]->skillDois(5,3,80);
	cout<<x<<endl;
	return true;
}