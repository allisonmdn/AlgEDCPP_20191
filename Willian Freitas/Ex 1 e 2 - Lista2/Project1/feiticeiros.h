#pragma once
#include "personagem.h"
#include <string>
class feiticeiros :
	public personagem
{
public:
	feiticeiros();
	~feiticeiros();
	int getMana() { return mana; }
	void setMana(int Mana) { mana = Mana; }
	string conjurar(int conjuracao);
	string soltarMagia(int magia);
	string enfeiticar(int feitico);


protected:
	int mana;
};

