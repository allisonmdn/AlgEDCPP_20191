#include "..\exercicio2\Guerreiro.h"
#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

std::string Guerreiro::mover()
{
	return std::string("movendo!, voce andou: " + (char)vel);
}

std::string Guerreiro::atacar()
{
	return std::string("atacando!, seu dano eh: " + (char)forca);
}

int Guerreiro::defender(int fInim)
{
	if (fInim > armadura)
		return (armadura - fInim);

	else
		return 0;
}

std::string Guerreiro::restaurarVida()
{
	vida = vidaInicial;
	return std::string("sua vida foi restaurada!");
}

std::string Guerreiro::sofrerDano(int d)
{
	if (d > 0)
		vida -= d;

	if (vida <= 0) {
		vivo = false;
		return std::string("Voce morreu!");
	}
	else {
		return std::string("voce sofreu  de dano sua vida atual eh: " + (char)vida);
	}
}
