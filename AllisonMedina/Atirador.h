#include "Pistola.h"
#include "Carabina.h"
#include "Rifle.h"
#include "Armadura.h"
#include "KitMedico.h"

#pragma once

class Atirador
{
public:
	Atirador();
	~Atirador();
	void atirar();
	void recarregarArma();
	void mudarArma();
	void armaEscolhida();
	void usarArmadura();
	void usarKitMedico();

private:
	//Arma
	Arma * armas[3]; //Segunda opção, de modo estático.    = new Arma[3];  //Primeira opção, instancia os tipos de armas em um vetor de alocação dinâmica.
	int troca_armas; // Conforme a troca, muda o valor.

	//Armadura
	Armadura * armor = new Armadura;
	std::string trocar_armadura;

	//Kit

	KitMedico * kitm = new KitMedico;
};

