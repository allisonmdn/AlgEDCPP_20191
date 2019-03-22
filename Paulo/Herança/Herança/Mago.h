#pragma once
#include "Personagem.h"
class Mago :
	public Personagem{
public:
	Mago();
	~Mago();

	string quemSou() override;
	void defineNome(string s);
};

