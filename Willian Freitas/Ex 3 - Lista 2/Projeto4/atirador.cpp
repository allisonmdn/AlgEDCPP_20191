#include "atirador.h"
#include "arma.h"
#include "pistola.h"
#include "municao.h"

using namespace std;

atirador::atirador(int i)
{
	armaAtiva = i;
}


atirador::~atirador()
{
}

string atirador::trocarDeArma(int i)
{
	if(municao[i] > 0)
	armaAtiva = i;

	if(i == 0)
	return "trocou para pistola";
	else if (i == 1)
		return "trocou para carabina";
	else if (i == 2)
		return "trocou para rifle";
}

void atirador::atirar()
{
	if (arma[armaAtiva]->getPente() > 0)
		arma[armaAtiva]->atirar();
	else
		recarregarArma();
}

void atirador::recarregarArma()
{
	if (municao[armaAtiva]->getQtdBalas() > arma[armaAtiva]->getEspacoPente()) {
		municao[armaAtiva]->recarregarPente(arma[armaAtiva]->getEspacoPente());
		arma[armaAtiva]->recarregar(arma[armaAtiva]->getEspacoPente());
	}
	else if (municao[armaAtiva]->getQtdBalas() == 0) {
		//não tem bala
	}
	else {
		municao[armaAtiva]->recarregarPente(-municao[armaAtiva]->getQtdBalas());
		arma[armaAtiva]->recarregar(municao[armaAtiva]->getQtdBalas());
	}
}

string atirador::tomarDano(int dano)
{
	if (armadura.getArmadura())
		qtdArmadura -= dano;
	else
	hp -= dano;

	return "tomou dano";
}

void atirador::usarArmadura()
{
	if (armadura.getArmadura()) {
		armadura.usarArmadura();
		qtdArmadura = 100;
	}
}

void atirador::usarKitMed()
{
	if (kit.getKit()) {
		hp = 100;
	}
}
