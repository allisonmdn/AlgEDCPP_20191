#include <iostream>
#include "Jogador.h"

using namespace std;

int main()
{
	Jogador *jogador = new Jogador(100, 50);
	jogador->setEnergia(40);
	jogador->setVida(50);
	cout << jogador->getEnergia() << endl;
	cout << jogador->getVida() << endl;
	delete jogador;
	system("pause");
	return 0;
}