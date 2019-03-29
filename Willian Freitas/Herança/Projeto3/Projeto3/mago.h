#pragma once
#include "personagem.h"
class mago:
	public personagem
{
public:
	mago();
	~mago();

	string quemSoul() override;
	void defineNome(string name);
};

