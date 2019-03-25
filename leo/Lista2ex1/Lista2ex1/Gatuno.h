#pragma once
#include "Personagem.h"
class Gatuno :
	public Personagem
{
public:
	Gatuno();
	~Gatuno();
	string Furto();
	string Envenenar();
	string Esconderijo();
private:
	int veneno;
};

