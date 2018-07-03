#ifndef PERSONAGEM
#define PERSONAGEM
#include "entidade.h"
#include "bloqueio.h"
#include "esquiva.h"
#include "dado.h"
#include <string>
using namespace std;
class personagem: public entidade, public ataque, public bloqueio, public esquiva
{
private:
	string nome;
public:
	personagem(int valorAtaque,int hp,int mana,int armFisica,int armRunica,int perEsquiva,string Nome);
	~personagem();
	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
	int skillTres(int armFisica,int armRunica,int hp);
	int controleAtaque(string valor,int armFisica,int armRunica,int hp);
	string getNome();
	int getAtaque();
	void setAtaq(int valor);
	int getHp();
	int getMAna();
	void debitarHp(int valor);
	void debitarMAna(int valor);
	int Dano(int armFisica);
	int getArmFisica();
	int getArmRunica();
	void setArmFisica(int valor);
	void setArmRunica(int valor);
	void setHp(int valor);
	void setMAna(int valor);
	void setEsquiv(int valor);
};
#endif
