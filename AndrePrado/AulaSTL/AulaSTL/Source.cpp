#include<iostream>
//#include<list>//include STL para lista
#include<queue>//include STL para fila
//#include<stack>//include STL para pilha
//#include<vector>//include STL para vetor de alocacao dinamica

#include"Carro.h"

using namespace std;


int main() {
	//declaracao de variaveis
	queue<Carro> filaCarros;
	Carro * carros = new Carro[3];
	Carro aux, ultimoCarro;
	int buscaPlaca;
	bool sair = false, encontrado = false;
	char opcao = 'm';

	//setando carros e fila
	carros[0].placa = 1;
	carros[1].placa = 2;
	carros[2].placa = 3;

	filaCarros.push(carros[0]);
	filaCarros.push(carros[1]);
	filaCarros.push(carros[2]);

	//metodo
	

	while (sair != true)
	{
		switch (opcao)
		{
		case 'm'://menu principal
			cout << "Menu do estacionamento:\n"
				<< "r - para remover carro por placa\n"
				<< "l - para limpar a tela\n"
				<< "s - para sair\n"
				<< "opcao: ";
			cin >> opcao;
			break;
		case 'r'://remover carro da fila
			cout << "Informe a placa do carro desejado: ";
			cin >> buscaPlaca;

			if (!filaCarros.empty()) {
				encontrado = false;
				ultimoCarro = filaCarros.back();
				cout << "\n";
				cout << "Placa do primeiro carro da fila: "<<filaCarros.front().placa << "\n";
				cout << "Placa alvo: " << buscaPlaca << "\n\n";
				//se for o primeiro carro
				if (filaCarros.front().placa == buscaPlaca) {
					cout << "Carro com a placa: " << filaCarros.front().placa << " removido do estacionamento\n";
					filaCarros.pop();
					encontrado = true;
				}
				else {//se nao
					//buscar carro
					while (filaCarros.front().placa != ultimoCarro.placa && encontrado != true) {
						aux = filaCarros.front();
						filaCarros.pop();
						filaCarros.push(aux);

						if (filaCarros.front().placa == buscaPlaca) {
							cout << "Carro com a placa: " << filaCarros.front().placa << " removido do estacionamento\n";
							filaCarros.pop();
							encontrado = true;
						}
					}
					//se for o ultimo
					if (filaCarros.front().placa == ultimoCarro.placa && filaCarros.front().placa == buscaPlaca) {
						cout << "Carro com a placa: " << filaCarros.front().placa << " removido do estacionamento\n";
						filaCarros.pop();
						encontrado = true;
					}
					//se nao encontrar o carro
					if (encontrado == false) {
						cout << "Carro nao encontrado!\n";
					}
				}	
			}
			else {
				cout << "Estacionamento vazio!\n";
			}
			opcao = 'm';
			break;
		case 's'://sair
			sair = true;
			break;
		case'l'://limpar tela
			system("cls");
			opcao = 'm';
			break;
		default://opcao invalida
			cout << "opcao invalida!\n";
			opcao = 'm';
			break;
		}
	}

	delete[] carros;
	system("pause");
	return 0;
}