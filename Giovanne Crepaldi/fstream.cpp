#include <iostream>
#include <fstream>

using namespace std;

void main() {

	ofstream arquivo("teste.txt"), out;
	if (!arquivo.is_open())
		cout << "Nâo abriu" << endl;
	
	arquivo << 10 << endl << "mapa1" << endl << 2 << 2 << endl;
	arquivo << "Linha 1 Coluna 1" << " " << "Linha 1 Coluna 2" << endl;
	arquivo << "Linha 2 Coluna 1" << " " <<"Linha 2 Coluna 2" << endl;

	arquivo.close();

	ifstream iarquivo;
	iarquivo.open("teste.txt");
	if (!iarquivo) {
		cout << "Não abriu" << endl;
	}

	int num_mapas;
	string nome_mapa;
	iarquivo >> num_mapas;
	cout << "Numero de mapas = " << num_mapas << endl;
	iarquivo >> nome_mapa;
	cout << "Nome do mapa = " << nome_mapa << endl;
	int num_linhas, num_colunas;
	iarquivo >> num_linhas >> num_colunas;
	cout << num_linhas << " " << num_colunas;

	string linha_col1, linha_col2;
	iarquivo >> linha_col1 >> linha_col2;
	cout << linha_col1 << " " << linha_col2 << endl;

	iarquivo.close();


	system("pause");
}