#include <iostream>
#include <string>
#include<fstream>

using namespace std;

int main()
{
	int pesoTotal = 0, id;
	int posicao;
	struct itens {
		int ID = -1;
		string tipo;
		int peso = 0;
	};
	int i = 0;
	itens array[50];
	string token;
	int tokenInt;
	int acao;
	ifstream arq("inventario.txt");


	while (!arq.eof()) {
		arq >> id;
		if (id > 0) {
			array[id].ID = id;
			arq >> token;
			array[id].tipo = token;
			arq >> tokenInt;
			array[id].peso = tokenInt;
			pesoTotal += array[id].peso;
			i++;
		}
	}

	ofstream arquivo("inventario.txt", std::ios::binary);
	for (i; i < 50 && pesoTotal < 60;) {
		cout << "acao";
		cin >> acao;
		if (acao == 0) {
			i = 60;
		}
		if (acao == 1) {
			cout << "posicao";
			cin >> posicao;
			array[posicao].ID = posicao;

			cout << "tipo";
			cin >> array[posicao].tipo;
			cout << "peso";
			cin >> array[posicao].peso;

			pesoTotal += array[posicao].peso;

			i++;
		}
		else if (acao == 2) {
			cin >> posicao;
			if (array[posicao].ID != -1) {
				pesoTotal -= array[posicao].peso;

				array[posicao].tipo = nullptr;
				array[posicao].peso = 0;
				array[posicao].ID = -1;
				i--;
			}
		}
		else if (acao == 3) {
			cin >> posicao;
			if (array[posicao].ID != -1) {
				cout << array[posicao].tipo;
				cout << " ";
				cout << array[posicao].peso;
				cout << endl;
			}
		}
	}

	for (int j = 0; j < 50; j++) {
		if (array[j].ID <= 0) {
			arquivo << array[j].ID;
			arquivo << " ";
			arquivo << array[j].tipo;
			arquivo << " ";
			arquivo << array[j].peso;
			arquivo << endl;
		}
	}

	system("pause");
	return 0;
}