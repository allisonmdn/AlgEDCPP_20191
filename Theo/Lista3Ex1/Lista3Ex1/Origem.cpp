#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void main()
{
	//Exercício 1
	int nRegistros;
	string registros[50], nome, data;


	cout << "Quantos registros quer fazer? ";
	cin >> nRegistros;

	if (nRegistros <= 0 || nRegistros > 50)
	{
		cout << "Voce deve fazer pelo menos um e no maximo 50 registros " << endl;

		cout << "Quantos registros quer fazer? ";
		cin >> nRegistros;
	}

	struct Pessoas
	{
		string nome, data;
	};

	Pessoas pessoas[50];

	for (int i = 0; i < nRegistros; i++)
	{	
		cout << "Digite seu nome: ";
		cin >> pessoas[i].nome;
	}

	for (int i = 0; i < nRegistros; i++)
	{
		cout << "Digite a data de aniversario: ";
		cin >> pessoas[i].data;
	}


	ofstream arqSaida("arqSaida.txt");

	if (arqSaida.is_open())
	{
		for (int i = 0; i < nRegistros; i++)
		{
			arqSaida << pessoas[i].nome << " " << pessoas[i].data << endl;
		}

		arqSaida.close();
	}
	
	system("pause");
}