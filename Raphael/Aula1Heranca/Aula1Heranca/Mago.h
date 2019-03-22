#pragma once
#include "Personagem.h"
class Mago :
	public Personagem
{
public:
	Mago();
	~Mago();
	std::string quemSoul() override;
	void defineNome(std::string s );
};

