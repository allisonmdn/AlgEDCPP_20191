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

	void recarregar();
	void medicar();
	string trocarArma(int tipo);
	string levarChumbo(int dano);
	void statusAtual();

	Arma *getArma();
	Municao *getMunicao();

private:
	int armaAtual = 0, hp = 100, dano = 0;
	Arma *armas[3]{ new Pistola, new Rifle, new Carabina };
	Municao *municoes[3]{ new MunicaoPistola, new MunicaoRifle, new MunicaoCarabina };
	KitMedico *kitMed = new KitMedico;

};