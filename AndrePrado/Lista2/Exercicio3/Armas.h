#pragma once
#include"Municao.h"
#include"FPS.h"
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

