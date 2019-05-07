#include <iostream>
#include "Inventario.h"

int main() {
	Inventario i;

	i.criarItem(10, "giovanne", "fuzil");
	i.criarItem(5, "guilherme", "fuzil");
	i.criarItem(7, "gabriel", "fuzil");

	for (int a = 0; a < 3; a++) {

		cout << endl << i.itens[a].id << endl;
		cout << i.itens[a].peso << endl;
		cout << i.itens[a].tipo << endl;

	}

	cout << endl << i.consultarItem("gabriel").tipo << endl;
	i.removerItem();

	for (int a = 0; a < 2; a++) {

		cout << endl << i.itens[a].id << endl;
		cout << i.itens[a].peso << endl;
		cout << i.itens[a].tipo << endl;

	}

	system("Pause");
	return 0;
}
