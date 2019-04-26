#include "Municao.h"

Municao::Municao()

{
	this->projeteis = 0;
}


Municao::~Municao()
{
}

void Municao::diminuirProjeteis()
{
	this->projeteis -= 1;
}
