#pragma once
#include"Municao.h"
class Armas
{
public:
	Armas();
	~Armas();

	void disparar();
	void recarregar(Municao * mun);

private:
	Municao *mun;
	int municao;
};

