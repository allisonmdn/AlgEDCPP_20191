#include <iostream>

using namespace std;
int main() {


	// Exercício 1

	int *inteiros1 = (int *)calloc(3, sizeof(int));

	cout << "Adicione 3 valores: ";
	for (int i = 0; i < 3; i++)
		cin >> inteiros1[i];

	for (int i = 0; i < 3; i++)
		cout << inteiros1[i];

	//Exercício 2

	int *inteiros;

	inteiros = new int[3];

	cout << "Adicione 3 valores: ";
	for(int i = 0; i < 3; i++)
	cin >> inteiros[i];

	for (int i = 0; i < 3; i++)
		cout << inteiros[i];

	//Exercício 3
	int tam;
		int *inteiros2 = (int *)calloc(3, sizeof(int));

	cout << "Adicione 3 valores: ";
	for (int i = 0; i < 3; i++)
		cin >> inteiros2[i];

	for (int i = 0; i < 3; i++)
		cout << inteiros2[i];

	cout << "Qual o novo valor total do vetor: ";
	cin >> tam;
	inteiros2 = (int*)realloc(inteiros2, tam * sizeof(int));

	for (int i = 3; i < tam; i++)
		cin >> inteiros2[i];

	for (int i = 0; i < tam; i++)
		cout << inteiros2[i];

	free(inteiros2);

	system("pause");
	return 0;
}

