#pragma once
#include <iostream>
#include <string>
#include "Arma.h"
#include "Pistola.h"
#include "Rifle.h"
#include "Carabina.h"
#include "Municao.h"
#include "MunicaoPistola.h"
#include "MunicaoRifle.h"
#include "MunicaoCarabina.h"
#include "KitMedico.h"

using namespace std;

class Atirador
{
public:
	Atirador();
	~Atirador();

	void atirar();
	void recarregar();
	void medicar();
	void trocarArma();
	void levarChumbo(int dano);
	void statusAtual();

private:
	int armaAtual, hp, dano;
	Arma *armas[3]{ new Pistola(), new Rifle(), new Carabina() };
	Municao *municoes[3]{ new MunicaoPistola(), new MunicaoRifle(), new MunicaoCarabina() };
	KitMedico *kitMed = new KitMedico;

};