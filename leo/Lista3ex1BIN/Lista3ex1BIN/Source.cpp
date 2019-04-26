#include <iostream>
#include <fstream>
#include <string>
#include "Pessoas.h"

using namespace std;



int main() {
	Pessoas *p1 = new Pessoas[5];

	int qtdRegistros;

	cout << "quantos registros quer fazer?" << endl;
	cin >> qtdRegistros;

	while (qtdRegistros <= 0 || qtdRegistros > 5) {

		cout << "invalido. \n quantos registros quer fazer?" << endl;
		cin >> qtdRegistros;
	}

	for (int i = 0; i < qtdRegistros; i++) {
		cout << "nome:" << endl;
		cin >> p1[i].nome;
		cout << "aniversario:" << endl;
		cin >> p1[i].data;
	}


	ofstream agendaOUT("agenda.bin", ios::binary);
		if (agendaOUT.is_open()) {
			agendaOUT.write(reinterpret_cast<char*>(&p1), sizeof(Pessoas));
		}
		else {
			cout << "nao fluiu" << endl;
		}
		agendaOUT.close();

		Pessoas *p2 = new Pessoas[5];

		ifstream agendaIN;
		agendaIN.open("agenda.bin", ios::binary);
		if (agendaIN.is_open()) {
			agendaIN.read(reinterpret_cast<char*>(&p2), sizeof(Pessoas));

		}
		for (int i = 0; i < qtdRegistros; i++) {
			cout << "Nome: " << p2[i].nome << " - Aniversario: " << p2[i].data << endl;
		}
		agendaIN.close();

	system("pause");
}