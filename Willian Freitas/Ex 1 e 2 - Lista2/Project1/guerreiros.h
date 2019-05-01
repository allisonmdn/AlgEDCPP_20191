#pragma once
#include "personagem.h"
class guerreiros:
	public personagem
{
public:
	guerreiros();
	~guerreiros();
	int getStamina() { return stamina; }
	void setStamina(int Stamina) { stamina = Stamina; }
	string atacar(int ataque);
	string defender();

protected:
	int stamina, ataques;
};

