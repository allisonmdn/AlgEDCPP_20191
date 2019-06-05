#include <iostream>
#include <queue>
#include "Carro.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "ptb");

	Carro carro[10];
	queue <Carro> filaCarros;

	for (int i = 0; i < 10; i++)
	{
		carro[i].placa = i;
	}

	int iToken = -1;
	Carro carroToken;

	while (iToken == -1)
	{
		system("cls");

		cout << "Carros no estacionamento: " << filaCarros.size() << endl;
		cout << "=== === === === === === === === === ===" << endl;
		for (int i = 0; i < filaCarros.size(); i++)
		{
			if (i == 0)
			{
				cout << " " << filaCarros.front().placa << "  ";
			}
			else if (i + 1 == filaCarros.size())
			{
				cout << " " << filaCarros.back().placa;
			}
			else
			{
				cout << " -  ";
			}
		}
		cout << endl << "=== === === === === === === === === ===" << endl;

		cout << "[1] Adicionar carro" << endl;
		cout << "[2] Remover carro" << endl;
		cout << "[0] Sair" << endl;
		cout << "Digite uma opção: ";

		cin >> iToken;

		if (iToken == 1)
		{
			cout << "Digite uma placa de [0] a [9] do carro: ";
			cin >> iToken;

			if (iToken >= 0 && iToken <= 9 && filaCarros.size() < 10)
			{
				filaCarros.push(carro[iToken]);
			}

			iToken = -1;
		}
		else if (iToken == 2)
		{
			cout << "Digite uma placa de [0] a [9] do carro: ";
			cin >> iToken;

			if (iToken >= 0 && iToken <= 9 && filaCarros.size() != 0)
			{
				while (filaCarros.front().placa != iToken)
				{
					carroToken = filaCarros.front();
					filaCarros.pop();
					filaCarros.push(carroToken);
				}
				filaCarros.pop();
			}

			iToken = -1;
		}
		else if (iToken != 0)
		{
			iToken = -1;
		}
	}



	 

	system("pause");
}