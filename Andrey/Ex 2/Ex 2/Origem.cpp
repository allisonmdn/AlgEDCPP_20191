#include <iostream>


int main()
{
	int quant, novaquant;
	int i;


	std::cout << " Por favor informe a quantidade de numeros :" << std::endl;
	std::cin >> quant;

	int *ptrvetor;
	ptrvetor = (int*)calloc(quant, sizeof(int));


	for (i = 0; i < quant; i++) {

		std::cout << " Por favor insira o valor : " << std::endl;

		std::cin >> ptrvetor[i];

	}

	std::cout << std::endl;
	for (i = 0; i < quant; i++) {
		std::cout << ptrvetor[i] << std::endl;
	}
	

	std::cout << "Informe a nova quantidade de numeros" << std::endl;
	std::cin >> novaquant;
	ptrvetor = (int*)realloc(ptrvetor, novaquant *sizeof(int));

	for (i = quant; i < novaquant; i++)
	{
		std::cout << "Insira o novo valor" << std::endl;
		std::cin >> ptrvetor[i];
	}


	std::cout << std::endl;
	for (i = 0; i < novaquant; i++) {
		std::cout << ptrvetor[i] << std::endl;
	}


	free(ptrvetor);
	system("pause");
	return 0;
}