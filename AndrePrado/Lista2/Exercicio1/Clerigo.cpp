#include "Clerigo.h"



Clerigo::Clerigo()
{
	mortoVivo = true;
}


Clerigo::~Clerigo()
{
}

int Clerigo::curar()
{
	qtdCura = rand() % 8 + 1;
	return 0;
}

void Clerigo::destruirMortoVivo()
{
		mortoVivo = false;
		cout << "Morto vivo destruido!\n";
}
