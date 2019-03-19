#include <iostream>


int main()
{
	int quant;
	int i;


	std::cout << " Por favor informe a quantidade de numeros :" << std::endl;
	std::cin >> quant;

	int *ptrvetor;
	ptrvetor = (int*)calloc(quant, sizeof(int));

	
	for (i = 0; i < quant; i++) {

		std::cout << " Por favor insira o valor : " << std::endl;
		std::cin >> ptrvetor[i];

	}
	

	for (i = 0; i < quant; i++) {
		std::cout << ptrvetor[i] << std::endl;
	}
	std::cout << std::endl;

	
	for (i = quant - 1; i >= 0; i--) {
		std::cout << ptrvetor[i] << std::endl;
	}

	free(ptrvetor);
	system("pause");
	return 0;
}