#pragma once
#include "feiticeiros.h"
class sacerdoteDaTreva :
	public feiticeiros
{
public:
	sacerdoteDaTreva();
	~sacerdoteDaTreva();
	void setManaDasTrevas(int Mana) { manaDasTrevas = Mana; }
	int getManaDasTrevas() { return manaDasTrevas; }
	string poderDoInferno() { return "poder do inferno"; }

protected:
	int manaDasTrevas;
};

