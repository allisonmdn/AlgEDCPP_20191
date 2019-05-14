#pragma once
#include "Mago.h"
class SacerdoteLuz :
	public Mago
{
public:
	SacerdoteLuz();
	~SacerdoteLuz();

	void curar();
	void destruirMal();

	int getCurar() { return qtdCura; }
	bool detectarMal() { return mal; }

private:
	bool mal;
	int qtdCura;
};

