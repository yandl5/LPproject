#ifndef ESQUIVA
#define ESQUIVA 
#include "dado.h"
class esquiva
{
private:
	dado porcentagem;
	int rateEsquiva;
public:
	esquiva(int valor);
	~esquiva();
	int getEsquiva();
	void setEsquiva(int valor);
	bool esquivar();
};
#endif