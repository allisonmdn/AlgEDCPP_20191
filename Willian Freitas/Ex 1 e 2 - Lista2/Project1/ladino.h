#pragma once
#include "guerreiros.h"
class ladino :
	public guerreiros
{
public:
	ladino();
	~ladino();

	string esconderSe();
	string roubar();
	void setStealth(int Stealth) { stealth = Stealth; }
	int getStealth() { return stealth; }

protected:
	int stealth;
};

