#pragma once
#include "Arma.h"
class Atirador
{
private:
	Arma * armas[3]{new Pistola(), new Carabina(), new Rifle()};
	int armaAtual;
public:
	Atirador();
	~Atirador();
	void atirar();
	void carregar();
	void trocarArma();
	void medicar();
	void usarArmadura();

};

