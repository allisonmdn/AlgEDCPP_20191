#include <iostream>
#include <string>
#include<fstream>

using namespace std;

int main()
{

	ofstream arquivo("agenda.txt", std::ios::binary);
	struct agenda {
		string nome;
		int aniversario;
	};
	agenda array[50];

	for (int i = 0; i < 50; i++) {
		cout << "Informe o nome: " << endl;
		cin >> array[i].nome;
		if (array[i].nome == "x") {
			i = 60;
		}
		else {
			cout << "Informe o aniversario: " << endl;
			cin >> array[i].aniversario;
			arquivo << array[i].nome << " " << array[i].aniversario;
			arquivo << endl;
		}
		cout << endl;
	}


	system("pause");
	return 0;
}