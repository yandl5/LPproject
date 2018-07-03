#ifndef JOGADOR
#define JOGADOR
#include "paladino.h"
#include "viking.h"
#include "assassino.h"
#include "mago.h"
#include "entidade.h"
#include <memory>
#include <string>
#include <vector>
template<typename T>
class Jogador
{
private:
	T jogador;
public:
	Jogador(std::string nome);
	~Jogador();
	std::string getName();
};
template<typename T>
Jogador<T>::Jogador(std::string nome):jogador(nome){}
template<typename T>
Jogador<T>::~Jogador(){}
template<typename T>
std::string Jogador<T>::getName()
{
	return jogador.getNome();
}
#endif