#pragma once
#include "Personagem.h"
class Arqueiro :
	public Personagem
{
public:
	Arqueiro();
	~Arqueiro();
	string Rajada();
	string Concentrar();
	string Medicar();
private:
	int qtdFlechas;
};

