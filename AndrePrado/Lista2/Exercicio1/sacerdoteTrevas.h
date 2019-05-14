#pragma once
#include "Mago.h"
class sacerdoteTrevas :
	public Mago
{
public:
	sacerdoteTrevas();
	~sacerdoteTrevas();

	void causarFerimento();
	void destruirBem();

	int getDano() { return qtdDano; }
	bool detectarMal() { return bem; }

private:
	bool bem;
	int qtdDano;
};

