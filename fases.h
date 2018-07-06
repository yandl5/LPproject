#ifndef FASES
#define FASES
#include "combate.h"
#include <vector>
#include <memory>
class fases
{
private:
	string nome;
	vector<shared_ptr<monstro>> a;
	bool vivo;
	bool endGame;
	vector<string> cartas;
public:
	fases();
	~fases();
	void faseUm();
	void faseDois();
	void faseTres();
	void faseQuatro();
	void EndGame();
	bool getEndGame();
	friend istream& operator>> (istream &i, fases &t);
	friend ostream& operator<< (ostream &o, fases &t);
};
#endif