#include <iostream>



int main()
{
	int * vetorInt;
	int n = 3;
	int cont = 0;
	
	vetorInt = (int*)calloc(3, sizeof(int));


	setlocale(LC_ALL, "Portuguese");

	//In(C)

	printf("Exe 3\n");

	for (int i = 0; i < 3; i++)
	{
		
		printf("[");
		printf("%d", i + 1);
		printf("] Insira um número inteiro: ");
		scanf_s("%d", &vetorInt[i]);
		cont++;	 //Contador para espaços alocados.
		
		
	}

	//Out (C)

	printf("Os numeros são: ");

	for (int i = 0; i < 3; i++)
	{
		printf("%d", vetorInt[i]);
		printf(" ");
	}

	printf("\n");
		
	int rlc = NULL;	
	int valor_aux = 0;

	//Realocando.

	printf("Digite quantos espaços no vetor deseja aumentar: ");
	scanf_s("%d", &rlc); //Variável para adicionar espaços a mais.

	valor_aux = cont + rlc;	//Variável auxiliar para a soma dos espaços.
	
	vetorInt = (int *)realloc(vetorInt, valor_aux * sizeof(int));	//Realocando a memória com o espaço necessário.
	
	do
	{
		++cont;
		printf("[");
		printf("%d", cont);
		printf("] Insira um número inteiro: ");
		scanf_s("%d", &vetorInt[cont - 1]);	//cont - 1 para entrar na posição correta após a realocação. 		
	}while (valor_aux != cont);
	
	std::cout << "Os números totais agora são: ";

	for (int i = 0; i < cont; i++) //Mostrando os valores presentes no vetor alocado dinâmicamente.
	{
		printf("%d", vetorInt[i]);
		printf(" ");
	}

	//Liberando espaço na memória.		
	free(vetorInt);


	system("pause");

}
/*Escrever um programa para alocar dinamicamente um vetor de inteiros,
preencher este vetor com valores lidos do teclado e mostre na tela os valores do vetor. Após
solicite ao usuário uma quantidade para realocar expandindo o espaço já alocado, e solicite
para o mesmo informar novos valores para preencher todo o novo espaço, mantendo os já
existentes. Ao final libere a memória. Utilize as funções da linguagem C.*/