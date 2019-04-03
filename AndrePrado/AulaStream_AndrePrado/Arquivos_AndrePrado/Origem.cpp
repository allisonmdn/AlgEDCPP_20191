#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
	ofstream arqSaida("teste.txt",ios::out);
	ifstream arqEntrada("teste.txt");

	if (arqSaida.is_open()) {

		arqSaida << 10 << "\n" << "mapa1\n" << 2 << " " << 2 << "\n";
		arqSaida << "l1c1" << " "<< "l1c2" << "\n";

		arqSaida.close();
	}
	else {
		cout << "Arquivo fechado! nao foi possivel abri-lo!\n";
	}

	int num_mapas = 0;
	string noma_mapa, linha_col1, linha_col2;
	int num_linhas = 0, num_colunas = 0;

	if (arqEntrada.is_open()) {
		arqEntrada >> num_mapas;
		cout << "Total de mapas: " << num_mapas << endl;
		arqEntrada >> noma_mapa;
		cout << noma_mapa << endl;
		arqEntrada >> num_linhas >> num_colunas;
		cout << "Numero de linhas: " << num_linhas << "\nNumero de colunas: " << num_colunas << endl;

		arqEntrada >> linha_col1 >> linha_col2;
		cout << linha_col1 << " " << linha_col2 << endl;
	}
	else {
		cout << "Arquivo fechado! nao foi possivel abri-lo!\n";
	}

	system("pause");
	return 0;
}