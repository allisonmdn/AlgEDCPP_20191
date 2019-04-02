#pragma once
#include "Arma.h"
#include "Municao.h"
#include "MCarabina.h"
#include "MRifle.h"
#include "Carabina.h"
#include "Rifle.h"
class Atirador
{
private:
	Arma * armas[2]{ new Carabina(), new Rifle() };
	int armaAtual, vida;
	Municao * municao[2]{ new MCarabina(), new MRifle() };

public:
	Atirador();
	~Atirador();
	void atirar();
	void carregar();
	void trocarArma();
	void medicar();
	void usarArmadura();