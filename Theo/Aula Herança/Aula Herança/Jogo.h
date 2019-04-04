#pragma once
#include"Mago.h"
#include"Guerreiro.h"
#include"Personagem.h"
class Jogo
{
public:
	Jogo();
	~Jogo();

	void escolhePersonagem(int per);
	Personagem *getPersonagem();


private:

	void definePersonagem(Personagem *p);
	Personagem *personagem = nullptr;
};

