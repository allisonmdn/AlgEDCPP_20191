#include "jogo.h"
#include "personagem.h"
#include "mago.h"
#include "guerreiro.h"


jogo::jogo()
{
}


jogo::~jogo()
{
}

void jogo::escolherPersonagem(int per)
{
	if (per == 1)
		definirPersonagem(new mago());
	if (per == 2)
		definirPersonagem(new guerreiro());
}

void jogo::definirPersonagem(personagem * p)
{
	this->perso = p;
}

personagem * jogo::obterPersonagem()
{
	return perso;
}
