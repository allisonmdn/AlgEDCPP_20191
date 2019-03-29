#include "Atirador.h"



Atirador::Atirador()
{
	this->armaAtual = 0;
	this->vida = 100;
}


Atirador::~Atirador()
{
}

void Atirador::atirar()
{
	std::cout << "!";
	this->armas[this->armaAtual]->disparar();
}

void Atirador::carregar()
{
	this->armas[this->armaAtual]->recarregar(this->municao[this->armaAtual]);
}

void Atirador::trocarArma()
{
	std::cout << "Informe a arma desejada 0 - Carabina e 1- Rifle" << std::endl;
	std::cin >> this->armaAtual;
	while (this->armaAtual != 0 && this->armaAtual != 1) {
		std::cout << "Informe a arma desejada 0 - Carabina e 1- Rifle" << std::endl;
		std::cin >> this->armaAtual;
	}

}

void Atirador::medicar()
{
	std::cout << "to medicado" << std::endl;
}

void Atirador::usarArmadura()
{
	std::cout << "usando armadura" << std::endl;
}
