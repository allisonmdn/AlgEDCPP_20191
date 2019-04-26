#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Pessoas {
	int data;
	string nome;
};

int main() {

	int qtdRegistros;
	string registros[5], nome, data;

	cout << "quantos registros quer fazer?" << endl;
	cin >> qtdRegistros;

	while (qtdRegistros <= 0 || qtdRegistros > 5) {

		cout << "invalido. \n quantos registros quer fazer?" << endl;
		cin >> qtdRegistros;
	}

	Pessoas p[5];

	for (int i = 0; i < qtdRegistros; i++) {
		cout << "nome:" << endl;
		cin >> p[i].nome;
		cout << "aniversario:" << endl;
		cin >> p[i].data;
	}
	ofstream agenda("agenda.txt");

	if (agenda.is_open()) {
		for (int i = 0; i < qtdRegistros; i++) {
			agenda << "Nome: " << p[i].nome << " - Aniversario: " << p[i].data << endl;
		}
		agenda.close();
	}

	system("pause");

}