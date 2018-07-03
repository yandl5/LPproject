#ifndef MONSTRO
#define MONSTRO
#include "entidade.h"
#include "bloqueio.h"
#include "esquiva.h"
#include "dado.h"
#include <string>
using namespace std;
class monstro: public entidade, public ataque, public bloqueio, public esquiva
{
private:
	string nome;
	int tipo;
	dado sorteio;
public:
	monstro(int valorAtaque,int hp,int mana,int armFisica,int armRunica,int perEsquiva,string Nome,int Tipo);
	~monstro();
	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
	int realizarAtaque(int armFisica,int armRunica,int hp);
	string getNome();
	int getAtaque();
	int getHp();
	int getMAna();
	void debitarHp(int valor);
	void debitarMAna(int valor);
	int getSorteio();
	int Dano(int armFisica);
	int getArmFisica();
	int getArmRunica();
	void setArmFisica(int valor);
	void setArmRunica(int valor);
};
#endif
