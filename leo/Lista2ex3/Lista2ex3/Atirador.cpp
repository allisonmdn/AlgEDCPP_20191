#include "Atirador.h"



Atirador::Atirador()
{
	hp = 100;
	armaAtual = 0;
	dano = 0;
}


Atirador::~Atirador()
{
}

void Atirador::atirar()
{
	this->armas[this->armaAtual]->disparar();
}

void Atirador::recarregar()
{
	this->armas[this->armaAtual]->recarregar(this->municoes[armaAtual]);
}

void Atirador::medicar()
{

}

void Atirador::trocarArma()
{
	cout << "qual arma quer?" << endl << "0=pistola; 1=rifle; 2=carabina" << endl;
	cin >> this->armaAtual;
	if (armaAtual == 0) {
		cout << "pegou pistola" << endl;
	}
	else if (armaAtual == 1) {
		cout << "pegou rifle" << endl;
	}
	else if (armaAtual == 2) {
		cout << "pegou carabina" << endl;
	}
	while (this->armaAtual != 0 && this->armaAtual != 1 && this->armaAtual != 2) {
		cout << "opcao invalida! escolha uma arma:" << endl << "0=pistola; 1=rifle; 2=carabina" << endl;
		cin >> this->armaAtual;
	}
}

void Atirador::levarChumbo(int chumbo)
{
	dano += chumbo;
	hp -= dano;
	cout << "levou chumbo" << endl;
}

void Atirador::statusAtual()
{
	cout << "hp: " << hp << endl;
	cout << "arma equipada: " << armaAtual << endl;
	cout << "municao restante: " << municoes[armaAtual]->getProjeteis() << endl;
}

