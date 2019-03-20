// Ex3.cpp: Define o ponto de entrada para a aplicação de console.



#include "stdafx.h"
#include <iostream>
#include <stdlib.h>

int main()
{
	setlocale(LC_ALL, "portuguese");

	int quantidade;
	int i;

	std::cout << " Por favor informe o tamanho do vetor :" << std::endl;
	std::cin >> quantidade;

	int *ptrvetor;
	ptrvetor = (int*)calloc(quantidade, sizeof(int));

	// preenchendo o vetor
	for (i = 0; i < quantidade; i++) {

		std::cout << " Por favor insira um valor : " << std::endl;
		std::cin >> ptrvetor[i];
	}
	// Devolvendo valores inseridos para o usuário (crescente)

	for (i = 0; i < quantidade; i++) {
		std::cout << ptrvetor[i] << std::endl;
	}

	// Expandindo o vetor

	std::cout << " Quantas posições terá o novo vetor ? " << std::endl;
	std::cin >> quantidade;

	ptrvetor=(int*)realloc(ptrvetor,quantidade* sizeof(int));

	std::cout << "Continue a preencher o vetor, insira o próximo valor ..." << std::endl;
	std::cin >> quantidade;





	// Devolvendo valores inseridos pela o usuário (crescente)

	for (i = 0; i < quantidade; i++) {
		std::cout << ptrvetor[i] << std::endl;
	}
		delete[]ptrvetor;


		system("Pause");

	}





/*Escrever um programa para alocar dinamicamente um vetor de inteiros,
preencher este vetor com valores lidos do teclado e mostre na tela os valores do vetor.Após
solicite ao usuário uma quantidade para realocar expandindo o espaço já alocado, e solicite
para o mesmo informar novos valores para preencher todo o novo espaço, mantendo os já
existentes.Ao final libere a memória.Utilize as funções da linguagem C.*/
