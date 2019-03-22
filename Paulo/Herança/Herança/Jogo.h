#pragma once
#include "Personagem.h"
#include "Mago.h"
#include "Guerreiro.h"
class Jogo
{
private:
	Personagem *personagem = nullptr;
	void definePersonagem(Personagem *p);

public:
	Jogo();
	~Jogo();

	void escolhePersonagem(int per);

	Personagem *obterPersonagem();

};

