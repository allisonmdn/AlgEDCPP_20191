#include "PersoBase.h"



PersoBase::PersoBase()
{
}


PersoBase::~PersoBase()
{
}

std::string PersoBase::mover()
{
	return std::string("movendo!, voce andou: " + (char)vel);
}

std::string PersoBase::restaurarVida()
{
	vida = vidaInicial;
	return std::string("sua vida foi restaurada!");
}

std::string PersoBase::sofrerDano(int d)
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
