// ConsoleApplication1.cpp: Exercicio 2

#include "stdafx.h"
#include "iostream"

void main()
{
	int qtd, opcao;
	int* vetor;

	std::cout << "Informe a quantidade de valores a serem lidos: ";
	std::cin >> qtd;
	
	vetor = (int*)calloc(qtd, sizeof(int));
	
	std::cout << "Informe os valores inteiros: ";
	for (int i = qtd-1; i >= 0; i--)
	{
		std::cin >> vetor[i];
	}

	std::cout << "Informe 1 - Impressao Ordem Direta; \nInforme 2 - Impressao Reversa; \n";
	std::cin >> opcao;
	if (opcao == 1)
	{
		for (int i = qtd-1; i >= 0; i--)
		{
			std::cout << "Numeros: " << vetor[i] << ", ";
		}
	}
	if (opcao == 2)
	{
		for (int i = 0; i < qtd; i++)
		{
			std::cout << "Numeros: " << vetor[i] << ", ";
		}
	}

	system("pause");
}

