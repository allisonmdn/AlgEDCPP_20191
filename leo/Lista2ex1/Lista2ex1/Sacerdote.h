#pragma once
#include "Personagem.h"
class Sacerdote :
	public Personagem
{
public:
	Sacerdote();
	~Sacerdote();
	string ProtecaoDivina();
	string Bencao();
	string EscudoSagrado();
private:
	int bencao;
};

