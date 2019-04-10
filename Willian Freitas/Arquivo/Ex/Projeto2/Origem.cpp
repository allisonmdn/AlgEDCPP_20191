#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void main() {
	int n, m, o;
	
	ofstream arquivo("arq.txt", ios::binary);
	if (!arquivo)
		cout << "Erro ao abrir" << endl;
	else {
		n = 10;
		m = 1;
		o = 2;
		arquivo.write(reinterpret_cast<const char*> (&n), sizeof(int));
		arquivo.write(reinterpret_cast<const char*> (&m), sizeof(int));
		arquivo.write(reinterpret_cast<const char*> (&o), sizeof(int));
	}
	ifstream lerArq;
	lerArq.open("arq.bin", ios::in);

	if (lerArq) {
		int i;
		while (lerArq && !lerArq.eof()) {
			lerArq.read(reinterpret_cast<char*> (&i), sizeof(int));
			if(lerArq.tellg() > 0)
			cout << i << endl;
		} 
	}

	lerArq.close();
	system("pause");
}