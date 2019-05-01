#include "Atirador.h"
#include "Municao.h"
#include "MunicaoCarabina.h"


Atirador::Atirador()
{
}


Atirador::~Atirador()
{
}

void Atirador::recarregar()
{
	if (armaAtual == 0) {
		getArma()->recarregar(10);
	}
	else if (armaAtual == 1) {
		getArma()->recarregar(10);
	}
	else if (armaAtual == 2) {
		getArma()->recarregar(30);
	}
}

void Atirador::medicar()
{

	if (kitMed->getKitMed()) {
		kitMed->medicar();
	}
}

string Atirador::trocarArma(int tipo)
{
	armaAtual = tipo;
	if (tipo == 0) {
		return string("pegou pistola");
	}
	else if (tipo == 1) {
		return string("pegou rifle");
	}
	else if (tipo == 2) {
		return string("pegou carabina");
	}
}

string Atirador::levarChumbo(int chumbo)
{
	dano += chumbo;
	hp -= dano;
	return string("levou chumbo");
}

void Atirador::statusAtual()
{
	cout << "hp: " << hp << endl;
	cout << "arma equipada: " << armaAtual << endl;
	cout << "municao: " << municoes[3]->getProjeteis() << endl;
}

Arma * Atirador::getArma()
{
	return armas[armaAtual];
}

Municao * Atirador::getMunicao()
{
	return municoes[armaAtual];
}

