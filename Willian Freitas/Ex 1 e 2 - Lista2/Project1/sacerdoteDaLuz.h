#pragma once
#include "feiticeiros.h"
class sacerdoteDaLuz :
	public feiticeiros
{
public:
	sacerdoteDaLuz();
	~sacerdoteDaLuz();

	string poderDivino() { return "poder divino"; }
	void setManaEspiritual(int Mana) { manaEspiritual = Mana; }
	int getManaEspiritual() { return manaEspiritual; }

protected:
	int manaEspiritual;
};

