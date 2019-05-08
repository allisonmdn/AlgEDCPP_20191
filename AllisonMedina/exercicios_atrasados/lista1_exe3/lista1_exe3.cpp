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
		printf("] Insira um n�mero inteiro: ");
		scanf_s("%d", &vetorInt[i]);
		cont++;	 //Contador para espa�os alocados.
		
		
	}

	//Out (C)

	printf("Os numeros s�o: ");

	for (int i = 0; i < 3; i++)
	{
		printf("%d", vetorInt[i]);
		printf(" ");
	}

	printf("\n");
		
	int rlc = NULL;	
	int valor_aux = 0;

	//Realocando.

	printf("Digite quantos espa�os no vetor deseja aumentar: ");
	scanf_s("%d", &rlc); //Vari�vel para adicionar espa�os a mais.

	valor_aux = cont + rlc;	//Vari�vel auxiliar para a soma dos espa�os.
	
	vetorInt = (int *)realloc(vetorInt, valor_aux * sizeof(int));	//Realocando a mem�ria com o espa�o necess�rio.
	
	do
	{
		++cont;
		printf("[");
		printf("%d", cont);
		printf("] Insira um n�mero inteiro: ");
		scanf_s("%d", &vetorInt[cont - 1]);	//cont - 1 para entrar na posi��o correta ap�s a realoca��o. 		
	}while (valor_aux != cont);
	
	std::cout << "Os n�meros totais agora s�o: ";

	for (int i = 0; i < cont; i++) //Mostrando os valores presentes no vetor alocado din�micamente.
	{
		printf("%d", vetorInt[i]);
		printf(" ");
	}

	//Liberando espa�o na mem�ria.		
	free(vetorInt);


	system("pause");

}
/*Escrever um programa para alocar dinamicamente um vetor de inteiros,
preencher este vetor com valores lidos do teclado e mostre na tela os valores do vetor. Ap�s
solicite ao usu�rio uma quantidade para realocar expandindo o espa�o j� alocado, e solicite
para o mesmo informar novos valores para preencher todo o novo espa�o, mantendo os j�
existentes. Ao final libere a mem�ria. Utilize as fun��es da linguagem C.*/