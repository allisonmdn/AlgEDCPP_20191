#pragma once
#include"Personagem.h"

class SacerdoteLuz : public Personagem
{
public:
	SacerdoteLuz();
	~SacerdoteLuz();
	string curar();
	string iluminar();

private:
	int energia;
};

