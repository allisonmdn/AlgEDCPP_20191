#include <iostream>
#include <queue>
#include "carros.h"

using namespace std;

int main() {

	bool encontrou = false;
	int placaExcluir;


	queue <carros> fila_carros;

	carros * car = new carros[3];



	car[0].placas = 10;
	car[1].placas = 20;
	car[2].placas = 30;


	for (int i = 0; i < 3; i++) {



		fila_carros.push(car[i]);

	}

	placaExcluir = car[2].placas;
	cout << placaExcluir << endl;
	cout << fila_carros.front().placas << endl;

	while (encontrou == false)
	{
		if (placaExcluir == fila_carros.front().placas) {

			encontrou = true;
		}

		if (encontrou == true)
		{
			fila_carros.pop();
			cout << "Excluiu o primeiro carro da fila" << endl;
		}
		else {

			carros *carro = &fila_carros.front();
			fila_carros.pop();
			fila_carros.push(*carro);
			cout << " carro foi para o fim da fila " << endl;

		}
	}