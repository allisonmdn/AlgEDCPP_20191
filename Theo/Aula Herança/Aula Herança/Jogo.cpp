#include "Jogo.h"
#include"Mago.h"
#include"Guerreiro.h"
#include"Personagem.h"


Jogo::Jogo()
{
}


Jogo::~Jogo()
{
}

void Jogo::escolhePersonagem(int per)
{
	if (per == 1)
	{
		definePersonagem(new Mago);
	}

	if (per == 2)
	{
		definePersonagem(new Guerreiro);
	}
}

Personagem * Jogo::getPersonagem()
{
	return this->personagem;
}

void Jogo::definePersonagem(Personagem * p)
{
	this->personagem = p;
}


