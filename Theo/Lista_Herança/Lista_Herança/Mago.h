#pragma once
#include "Personagem.h"

#include<string>

using namespace std;

class Mago :
	public Personagem
{
public:
	Mago();
	~Mago();
	string lancarMagia();
	int getMana() { return mana; };

private:
		int mana;

};

