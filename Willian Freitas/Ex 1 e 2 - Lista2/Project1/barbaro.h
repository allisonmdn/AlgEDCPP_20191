#pragma once
#include "guerreiros.h"
class barbaro :
	public guerreiros
{
public:
	barbaro();
	~barbaro();
	void setArmas(int Armas) { armas = Armas; }
	int getArmas() { return armas; }
	void setArmadura(int Armadura) { armadura = Armadura; }
	int getArmadura() { return armadura; }

protected:
	int armas, armadura;
};

