#pragma once
#include"Pistola.h"
#include"Rifle.h"
#include"Carabina.h"
#include"Municao.h"
#include"MunicaoPistola.h"
#include"MunicaoCarabina.h"
#include"MunicaRifle.h"
#include"Armadura.h"
#include"KitMedico.h"

class Atirador
{
public:
	Atirador();
	~Atirador();
	void recarregarArma();
	string usarArmadura();
	string usarKitMedico();
	void trocarArma(int i);
	Arma *getArma();
	Municao *getMunicao();
	

private:
	Municao *municao[3]{ new MunicaoPistola, new MunicaRifle, new MunicaoCarabina };
	Arma *arma[3]{ new Pistola, new Rifle, new Carabina };
	int armaAtual = 0;
	Armadura *armadura = new Armadura;
	KitMedico *kit = new KitMedico;

};

