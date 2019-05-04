#include "Guerreiro.h"



Guerreiro::Guerreiro()
{
}


Guerreiro::~Guerreiro()
{
}

std::string atacar(int fInim) {
	return std::string("atacando!, seu dano eh: " + (char)forca);
}

std::string defender() {
	if (fInim > armadura)
		return (armadura - fInim);

	else
		return 0;
}
