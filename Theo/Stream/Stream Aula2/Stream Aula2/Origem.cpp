#include<fstream>
#include<iostream>
using namespace std;

void main()
{
	int n, m, o;
	ofstream arquivo("arq.bin", ios::binary);
	if (arquivo.is_open())
	{
		n = 10;
		m = 1;
		o = 2;
		arquivo.write(reinterpret_cast<const char*> (&n), sizeof(int));
		arquivo.write(reinterpret_cast<const char*> (&m), sizeof(int));
		arquivo.write(reinterpret_cast<const char*> (&o), sizeof(int));

		arquivo.close();
	}
	else
	{
		cout << "Erro ao abrir arquivo...";
	}

	ifstream ler_arq;
	ler_arq.open("arq.bin", ios::in);
	if (ler_arq.is_open())
	{
		int data;
		do{
			ler_arq.read(reinterpret_cast<char*> (&data), sizeof(int));
			if ((ler_arq.tellg() > 0))
			{
				cout << data << endl;
				cout << ler_arq.tellg() << endl;
			}
		} while (ler_arq && !ler_arq.eof());
		ler_arq.close();
	}

	system("pause");
}

	