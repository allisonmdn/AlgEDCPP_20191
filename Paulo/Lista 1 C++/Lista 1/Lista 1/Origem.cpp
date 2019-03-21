#include <iostream>
#include <Windows.h>
#include "ArrayInt.h"
using namespace std;
int main() {
	//EX1
	int *vetorEX1, nPosicoesEX1;
	printf("EXERCICIO 1\n");
	printf("Informe a quantidades de componentes do vetor: ");
	scanf_s("%d", &nPosicoesEX1);
	vetorEX1 = (int*) calloc(nPosicoesEX1, sizeof(int));
	for (int i = 0; i < nPosicoesEX1; i++) {
		printf("Digite o valor para a posicao %d do vetor: ", i + 1);
		scanf_s("%d", &vetorEX1[i]);
	}
	printf("\nValores do vetor dinamico:\n");
	for (int i = 0; i < nPosicoesEX1; i++) {
		printf("%d\n", vetorEX1[i]);
	}
	free(vetorEX1);

	//EX2
	int *vetorEX2, nPosicoesEX2;
	cout << "\n\nEXERCICIO 2\n";
	cout << "Informe a quantidade de componetes do vetor: ";
	cin >> nPosicoesEX2;
	vetorEX2 = new int[nPosicoesEX2];
	for (int i = 0; i < nPosicoesEX2; i++) {
		cout << "Digite o valor para a posicao " << i + 1 << " do vetor: ";
		cin >> vetorEX2[i];
	}
	cout << endl << "Valores do vetor dinamico: " << endl;
	for (int i = 0; i < nPosicoesEX2; i++) {
		cout << vetorEX2[i] << endl;
	}
	delete[]vetorEX2;

	//EX3
	int *vetorEX3, nPosicoesEX3, aux;
	printf("\n\nEXERCICIO 3\n");
	printf("Informe a quantidades de componentes do vetor: ");
	scanf_s("%d", &nPosicoesEX3);
	vetorEX3 = (int*)calloc(nPosicoesEX3, sizeof(int));
	for (int i = 0; i < nPosicoesEX3; i++) {
		printf("Digite o valor para a posicao %d do vetor: ", i + 1);
		scanf_s("%d", &vetorEX3[i]);
	}
	printf("\nValores do vetor dinamico:\n");
	for (int i = 0; i < nPosicoesEX3; i++) {
		printf("%d\n", vetorEX3[i]);
	}

	printf("Digite a nova quantidade de valores do vetor: ");
	scanf_s("%d", &aux);
	vetorEX3 = (int*)realloc(vetorEX3,aux * sizeof(int));
	for (int i = nPosicoesEX3; i < aux; i++) {
		printf("Digite o valor para a posicao %d do vetor: ", i + 1);
		scanf_s("%d", &vetorEX3[i]);
	}
	printf("\nValores extras do vetor dinamico:\n");
	for (int i = 0; i < aux; i++) {
		printf("%d\n", vetorEX3[i]);
	}

	//EX4

	cout << "\n\nEXERCICIO 4\n";


	system("pause");
	return 0;
}