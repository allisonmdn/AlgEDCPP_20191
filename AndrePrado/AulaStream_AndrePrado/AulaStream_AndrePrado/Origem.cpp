#include<iostream>
#include<iomanip>
#include<sstream>
#include<fstream>

using namespace std;

int main()
{
	float pi = 3.1415926;
	float teste = 0;
	stringstream str;

	ofstream arqSaida("texto.txt");
	ifstream arqEntrada("texto.txt");

	str.precision(3);
	str << pi;

	cout.put('F').put('\n');
	char buffer[10];

	cin.get(buffer, 10);

	for (int i = 0; i < 10; i++) {
		cout.put(buffer[i]).put('\n');
	}

	cout.precision(2);
	cout << fixed << pi << endl;

	cout << str.str() << endl;

	if (arqSaida.is_open()) {

		arqSaida << pi;

		arqSaida.close();
	}

	if (arqEntrada.is_open()) {

		arqEntrada >> teste;

		cout << teste << endl;

		arqEntrada.close();
	}

	char buffer2[] = "Saida de baixo nivel";
	cout.write(buffer2, 5);
	cin.read(buffer2, 10);
	cout.write(buffer2, cin.gcount());

	system("pause");
	return 0;
}