#pragma once
#include"Armas.h"
#include"Municao.h"
#include"Carabina.h"
#include"MCarabina.h"
#include"Pistola.h"
#include"MPistola.h"
#include"Rifle.h"
#include"MRifle.h"
#include"KitMedico.h"
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

