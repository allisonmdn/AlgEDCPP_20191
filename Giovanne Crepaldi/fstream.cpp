#include <iostream>
#include <fstream>

using namespace std;

void main() {

	ofstream arquivo("teste.txt"), out;
	if (!arquivo.is_open())
		cout << "Nâo abriu" << endl;
	
	arquivo << 10 << endl << "mapa1" << endl << 2 << 2 << endl;
	arquivo << "Linha 1 Coluna 1" << "Linha 1 Coluna 2" << endl;
	arquivo << "Linha 2 Coluna 1" << "Linha 2 Coluna 2" << endl;

	arquivo.close();

	system("pause");
}