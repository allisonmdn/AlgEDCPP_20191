#include <iostream>
#include "Lista.h"
#include "Pessoa.h"
#include "Fila.h"
#include "Pilha.h"
#include "Carros.h"
#include <ctime>
#include <stdlib.h>

int main() {
	Fila<Carros> * fila_carros = new Fila<Carros>;
	Carros * carro= new Carros[3];

	carro[0].placa = 1;
	carro[1].placa = 2;
	carro[2].placa = 3;

	fila_carros->inserirElementoFila(&carro[0]);
	fila_carros->inserirElementoFila(&carro[1]);
	fila_carros->inserirElementoFila(&carro[2]);

	int placa;

	std::cin >> placa;

	for (int i = 0; i < 3; i++) {
		if (carro[i].placa == fila_carros->obterPrimeiroFila()->placa)
		{
			fila_carros->removerPrimeiroFila();
		}
		else
		{
			Carros * car = fila_carros->removerPrimeiroFila();
			//Carros carrosssss;
			//fila_carros->inserirElementoFila();
		}
		
	}

	



	system("pause");
	return 0;
}