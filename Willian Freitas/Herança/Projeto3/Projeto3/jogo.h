#pragma once
#include "personagem.h"
#include "mago.h"
#include "guerreiro.h"
class jogo
{
public:
	jogo();
	~jogo();
	void escolherPersonagem(int per);
	void definirPersonagem(personagem *p);
	personagem * obterPersonagem();

private:
	personagem *perso = nullptr;
};

