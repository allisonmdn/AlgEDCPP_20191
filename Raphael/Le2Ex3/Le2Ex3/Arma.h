#pragma once
#include "Municao.h"
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

