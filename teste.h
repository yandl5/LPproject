#ifndef FASEUM
#define FASEUM
#include "monstros.h"
#include "personagem.h"
#include "mago.h"
#include "esqueleto.h"
#include "paladino.h"
#include "minotauro.h"
#include "assassino.h"
#include "viking.h"
#include "combate.h"
template <typename T>
class fases
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
	combate<T>(a,b,i);
	return true;
}
#endif