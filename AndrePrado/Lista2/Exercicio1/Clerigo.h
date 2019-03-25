#pragma once
#include "Mago.h"
class Clerigo :
	public Mago
{
public:
	Clerigo();
	~Clerigo();

	int curar();
	void destruirMortoVivo();
	bool detectarMortoVivo() { return mortoVivo; }

	int getCurar() { return qtdCura; }

private:
	bool mortoVivo;
	int qtdCura;
};

