// lista_exe1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>


int main()
{
	//criando vetor com aloc. dinam.

	int * vetorInt;
	int n = 3;
	vetorInt = (int*)calloc(3, sizeof(int));


	//In(C)

	printf("Exe 1\n");

	for (int i = 0; i < 3; i++)
	{
		printf("[");
		printf("%d", i + 1);
		printf("] Input a int number: ");
		scanf_s("%d", &vetorInt[i]);
	}

	//Out (C)

	printf("The numbers are: ");

	for (int i = 0; i < 3; i++)
	{
		printf("%d", vetorInt[i]);
		printf(" ");
	}

	printf("\n");

	//Liberando espaço na memória.
	free(vetorInt);

	//Q2

	std::cout << "Exe 2\n";

	vetorInt = (int*)calloc(3, sizeof(int));

	//In(C++)

	for (int i = 0; i < 3; i++)
	{
		std::cout << "[" << i + 1 << "]" << "Input a int number: ";
		std::cin >> vetorInt[i];
	}

	std::cout << "\n";

	//Out(C++)

	std::cout << "The numbers are: ";

	for (int i = 0; i < 3; i++)
	{
		std::cout << vetorInt[i] << " ";
	}
	
	//Liberando espaço na memória
	free(vetorInt);

	std::cout << "\n";

	system("pause");
	return 0;
}

