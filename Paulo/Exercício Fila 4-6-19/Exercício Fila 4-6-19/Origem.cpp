#include <iostream>
#include <queue>
using namespace std;
int main() {

	struct carro{
		int placa;
	};

	queue<carro> filaCarros;

	bool carroEncontrado = false;
	int numeroCarros, placa, placaExclusao;

	cout << "Digite o numero de carros: ";
	cin >> numeroCarros;
	carro *carros = new carro[numeroCarros];

	for (int i = 0; i < numeroCarros; i++) {
		cout << "Digite a placa do carro: ";
		cin >> placa;
		cin.ignore();
		carros[i].placa = placa;
		filaCarros.push(carros[i]);
	}

	cout << "Digite a placa do carro a ser destruido: ";
	cin >> placaExclusao;
	cout << "\n\n";

	for (int i = 0; i < filaCarros.size() && carroEncontrado == false; i++) {
		if (carros[i].placa == placaExclusao) {
			carroEncontrado = true;
		}
		if(carros[i].placa == filaCarros.front().placa && carroEncontrado == true){
			filaCarros.pop();
			cout << "Carro com placa " << carros[i].placa << " destruido com sucesso!\n";
		}
		else {
			carro *carro = &filaCarros.front();
			filaCarros.pop();
			filaCarros.push(*carro);
			cout << "Carro com placa " << carros[i].placa << " voltou pro fim da fila.\n";
		}
	}

	cout << endl << endl << filaCarros.size() << " carros na fila.\n\n";
	
	system("pause");
	return 0;
}