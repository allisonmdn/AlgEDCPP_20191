#include<iostream>
#include<fstream>
#include<string>

using namespace std;

void main()
{
	//Exercício2
	string frase[10], substituir, original;
	char espaco;
	int contador = 0;

	cout << "Qual palavra voce quer substituir? ";
	cin >> original;

	cout << "Quer substituir por qual palavra? ";
	cin >> substituir;

	ifstream arqE("arqE.txt");
	if (arqE.is_open())
	{

		for (int i = 0; i < 4; i++)
		{
			arqE >> frase[i];

			if (frase[i] == original)
			{
				frase[i] = substituir;
			}
		}

		arqE.close();
	}
	else
	{
		cout << "Erro";
	}

	ofstream arqS("arqS.txt");
	if (arqS.is_open())
	{
		for (int i = 0; i < 4; i++)
		{
			arqS << frase[i] << " ";
		}

		arqS.close();
	}
	else
	{
		cout << "Erro ";
	}
	system("pause");
}