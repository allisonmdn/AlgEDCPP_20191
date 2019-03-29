#include "Atirador.h"



Atirador::Atirador()
{
	armaAtual = 0;
	vida = 100;

}


Atirador::~Atirador()
{
}

void Atirador::carrergar()
{
	armas[armaAtual]->recarregar(municao[armaAtual]);
}

void Atirador::trocarArma()
{
	std::cout << "Informe a arma desejada:\n 0 - Pistola\n1 - Carabina\n2 - Rifle\n";
	std::cin >> armaAtual;

	if (armaAtual != 0);
}
