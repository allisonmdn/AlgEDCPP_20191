#pragma once
#include "FPS.h"
class Municao
{
public:
	Municao();
	~Municao();
	void diminuiProjeteis();
	int getProjeteis();
private:
	int projeteis;
protected:
	void setProjeteis(int proj);
	
};

