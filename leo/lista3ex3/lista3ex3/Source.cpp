#include <iostream>
#include <string>
#include <fstream>
#include "Inventario.h"

using namespace std;

int main() {

	Inventario * playerBag = new Inventario;

	playerBag->maxPesoDefinir(300);
	playerBag->inserirItem(0, "DE.50", "Pistola", 40);
	playerBag->inserirItem(1, "Combat Knife", "Melee", 15);
	playerBag->inserirItem(2, "Shotgun", "Espingarda", 100);
	playerBag->inserirItem(3, "Erva Verde", "Cura", 10);
	playerBag->inserirItem(4, "Erva Azul", "Cura", 15);
	playerBag->inserirItem(5, "Erva Vermelha", "Cura", 20);

	playerBag->consultarListaItens();
	playerBag->removerItem(2);
	playerBag->consultarListaItens();

	playerBag->inserirItem(5, "Chave da porta", "Item", 5);	

	playerBag->consultarListaItens();


	ofstream inventario("inventario.txt");
	if (inventario.is_open()) {
		for (int i = 0; i < 6; i++) {
			inventario << "ID: " << playerBag->item[i]->id << endl;
			inventario << "Nome: " << playerBag->item[i]->nome << endl;
			inventario << "Tipo: " << playerBag->item[i]->tipo << endl;
			inventario << "Peso: " << playerBag->item[i]->peso << endl;

		}
	}

	system("pause");
}