#ifndef FASES
#define FASES
#include "combate.h"
#include <vector>
#include <memory>
class fases
{
private:
	vector<shared_ptr<monstro>> a;
	bool vivo;
	bool endGame;
public:
	fases();
	~fases();
	void faseUm();
	void faseDois();
	void faseTres();
	void faseQuatro();
	void EndGame();
};
#endif