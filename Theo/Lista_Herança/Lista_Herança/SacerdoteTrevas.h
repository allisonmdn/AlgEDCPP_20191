#pragma once
#include"Personagem.h"
class SacerdoteTrevas : public Personagem
{
public:
	SacerdoteTrevas();
	~SacerdoteTrevas();
	string Invocar();
	string Transformar();

private:
	int mana;
};

