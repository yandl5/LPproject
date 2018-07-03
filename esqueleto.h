#ifndef ESQUELETO
#define ESQUELETO
#include "entidade.h"
#include "monstros.h"
class esqueleto : public monstro
{
private:
public:
	esqueleto();
	~esqueleto();
	int skillUm(int armFisica,int armRunica,int hp);
	int skillDois(int armFisica,int armRunica,int hp);
}
;
#endif