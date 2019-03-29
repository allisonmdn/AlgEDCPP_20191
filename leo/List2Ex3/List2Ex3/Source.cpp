#include <iostream>
#include "Arma.h"
#include "Atirador.h"
#include "Pistola.h"
#include "Rifle.h"
#include "Carabina.h"
#include "Municao.h"
#include "MunicaoCarabina.h"
#include "MunicaoPistola.h"
#include "MunicaoRifle.h"
#include <cstdlib>

using namespace std;

int main() {
	Atirador *leo = new Atirador;
	Arma *arma1 = new Carabina;

	cout << leo->trocarArma(1) << endl;
	cout << leo->getArma()->atirar() << endl;

	cout << leo->trocarArma(2) << endl;
	leo->recarregar();
	cout << arma1->recarregar(30) << endl;
	cout << leo->getArma()->atirar() << endl;
	cout << leo->levarChumbo(60) << endl;
	leo->statusAtual();
	leo->medicar();
	leo->statusAtual();


	system("pause");
}