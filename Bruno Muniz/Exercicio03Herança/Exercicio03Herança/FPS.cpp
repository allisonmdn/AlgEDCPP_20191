#include "FPS.h"
#include"Atirador.h"


FPS::FPS()
{
}


FPS::~FPS()
{
}

void main()
{
	Atirador * atirador = new Atirador();
	atirador->carregar();
	atirador->atirar();
	atirador->trocarArma();
	atirador->carregar();
	atirador->atirar();

	atirador->medicar();
	system("pause");
}