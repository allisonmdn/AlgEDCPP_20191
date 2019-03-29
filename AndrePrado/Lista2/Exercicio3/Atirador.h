#pragma once
#include"Armas.h"
class Atirador
{
public:
	Atirador();
	~Atirador();

	void atirar();
	void carrergar();
	void trocarArma();
	void medicar();
	void usarArmadura();

private:
	Armas * armas[3]{ new Pistola(), new Carabina(), new Rifle() };
	int armaAtual;
};

