#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main() {

	//EX1
	cout << "EX1" << endl;
	int numRegistros;
	string nome, data, registros[50];
	struct pessoas { string nome, data; };
	pessoas pessoas[50];

	cout << "Digite o numero de registros a seres feitos (max 50, min 0): ";
	cin >> numRegistros;
	if (numRegistros > 50 || numRegistros < 1) {
		cout << "EU DISSE MAXIMO 50 E MINIMO 0 VELHO";
		return 0;
	}

	for (int i = 0; i < numRegistros; i++) {
		cout << "Digite o nome: ";
		cin >> pessoas[i].nome;
		cout << "Digite a data: ";
		cin >> pessoas[i].data;
	}

	ofstream arqSaida("arqSaida.txt");
	if (arqSaida.is_open()) {
		for (int i = 0; i < numRegistros; i++) {
			arqSaida << pessoas[i].nome << " " << pessoas[i].data << endl;
		}
		arqSaida.close();
	}

	system("pause");
	return 0;
}