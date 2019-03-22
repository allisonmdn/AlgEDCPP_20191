#include "stdafx.h"
#include "Jogo.h"


Jogo::Jogo()
{
}


Jogo::~Jogo()
{
}

void Jogo::escolhePersonagem(int per)
{
	if (per==1)
		definePersonagem(new Mago());
	if (per==2)
		definePersonagem(new Guerreiro());
}

Personagem * Jogo::obterPersonagem()
{


	

	return personagem;
}

void Jogo::definePersonagem(Personagem * p)
{

}
