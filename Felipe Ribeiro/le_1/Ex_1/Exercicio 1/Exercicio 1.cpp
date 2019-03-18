// Exercicio 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <stdlib.h>

int main()
{
	int quantidade;
	int i;


	std::cout << " Por favor informe a quantidade de numeros :" << std::endl;
	std::cin >> quantidade;

	int *ptrvetor;
	ptrvetor = (int*)calloc(quantidade,sizeof(int));

	// preenchendo o vetor
	for ( i = 0; i < quantidade; i++){

		std::cout << " Por favor insira algum numero : " << std::endl;
		std::cin >> ptrvetor[i];
		
	}
  

	for (i = 0; i < quantidade; i++) {
		std::cout << ptrvetor[i] << std::endl;
	}
	for (i = quantidade; i >= 0; i--) {
		std::cout << ptrvetor[i] << std::endl;
	}
}
