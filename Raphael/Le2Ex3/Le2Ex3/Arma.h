#pragma once
#include "Municao.h"
#include "FPS.h"
class Arma
{
public:
	Arma();
	~Arma();
	void disparar();
	void recarregar(Municao * mun);
private:
	Municao * mun = nullptr;
	int municao;
};

