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

using namespace std;

int main() {
	Atirador *leo = new Atirador();

	leo->atirar();
	leo->levarChumbo(60);
	leo->statusAtual();
	leo->trocarArma();
	leo->atirar();

	system("pause");
}