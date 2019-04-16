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
	int i;
	itens array[50];
	int acao;
	ifstream arq("inventario.txt", std::ios::in);

	for (i = 0; !arq.eof(); i++) {
		arq >> id;
		if (id < 0) {
			array[id].ID = id;
			arq >> array[id].tipo;
			arq >> array[id].peso;
		}
	}
	ofstream arquivo("inventario.txt", std::ios::out);
	for (i; i < 50 && pesoTotal < 60;) {
		cout << "acao";
		cin >> acao;
		if (acao == 0) {
			i = 60;
		}
		if (acao == 1) {
			cout << "posicao";
			cin >> posicao;
			if (array[posicao - 1].ID != -1)
				array[posicao - 1].ID = posicao;
			arquivo << posicao;
			arquivo << " ";
			cout << "tipo";
			cin >> array[posicao - 1].tipo;
			arquivo << array[posicao - 1].tipo;
			cout << "peso";
			cin >> array[posicao - 1].peso;
			arquivo << array[posicao - 1].tipo;
			pesoTotal += array[posicao - 1].peso;

			i++;
		}
		else if (acao == 2) {
			cin >> posicao;

			pesoTotal -= array[posicao - 1].peso;

			array[posicao - 1].tipo = nullptr;
			array[posicao - 1].peso = 0;
			array[posicao - 1].ID = -1;
			i--;
		}
		else if (acao == 3) {
			cin >> posicao;
			if (array[posicao - 1].ID != -1) {
				cout << array[posicao - 1].tipo;
				cout << array[posicao - 1].peso;
			}
		}
	}

	system("pause");
	return 0;
}