#include <iostream>
#include <queue>
#include "Carro.h"

using namespace std;


void main() {

	queue<Carro>filaEstaciona;

	/*Carro *carro1 = new Carro;
	Carro *carro2 = new Carro;
	Carro *carro3 = new Carro;*/

	Carro *carro = new Carro[100];

	while (filaEstaciona.size()!=3){
		int i = 0;
		cout << "Informe sua placa" << endl;
		cin >> carro->placa;
		filaEstaciona.push(carro[i]);
		i++;
	}

	int placaRemover;
	cout << "Tamanho da fila: " << filaEstaciona.size() << endl << "Qual carro quer remover?" << endl;
	cin >>placaRemover;

	Carro daFrente;
	daFrente.placa = -1;
	while (placaRemover != daFrente.placa) {
		daFrente = filaEstaciona.front();
		filaEstaciona.pop();
		filaEstaciona.push(daFrente);
		if (daFrente.placa == placaRemover) {
			filaEstaciona.pop();
			cout << "O Carro de placa " << placaRemover << " saiu." << endl;
		}
	}

	cout << "Tamanho da fila: " << filaEstaciona.size() << endl;
	
	system("pause");
}