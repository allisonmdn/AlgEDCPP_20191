#pragma once
#include "Guerreiro.h"
class Paladino :
	public Guerreiro
{
public:
	Paladino();
	~Paladino();

	void LancarMagia();

	bool detectarMal() { return mal; }

	int getPM() { return pm; }

private:
	bool mal;
	int pm;
};

