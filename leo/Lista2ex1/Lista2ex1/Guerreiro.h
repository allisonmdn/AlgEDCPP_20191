#pragma once
#include <string>
#include "Personagem.h"
using namespace std;
class Guerreiro :
	public Personagem
{
public:
	Guerreiro();
	~Guerreiro();
	string GolpeFulminante();
	string Medicar();
	string Vigor();
	string Montar();
	string Bloquear();

private:
	int vigor, forca, inteligencia, agilidade, destreza, sorte;
};

