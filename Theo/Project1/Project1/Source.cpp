#include<iostream>
#include"ArrayInt.h"
using namespace std;

int main() {
	//Exercicio 1
	/*int *vet, qtdNL, num;

	cout << "Informe a quantidade de valores a serem lidos ";
	cin >> qtdNL;

	vet = (int *)calloc(qtdNL, sizeof(int));

	for (int i = 0; i < qtdNL; i++) 
	{
		cout << "Digite um numero ";
		cin >> num;

		vet[i] = num;
	}

	cout << "Vetor: ";

	for (int i = 0; i < qtdNL; i++) {

		cout << vet[i] << " ";
	}

	free(vet);*/

	//Exercicio 2
	/*int *vet, qtdNL, num;

	cout << "Informe a quantidade de valores a serem lidos ";
	cin >> qtdNL;

	vet = new int[qtdNL];

	for (int i = 0; i < qtdNL; i++)
	{
		cout << "Digite um numero ";
		cin >> num;

		vet[i] = num;
	}

	cout << "Vetor: ";

	for (int i = 0; i < qtdNL; i++) {

		cout << vet[i] << " ";
	}

	delete[]vet;*/

	//Exercicio 3
	/*int *vet, qtdNL, num, qtdRealoc;

	cout << "Informe a quantidade de valores a serem lidos ";
	cin >> qtdNL;

	vet = (int *)calloc(qtdNL, sizeof(int));

	for (int i = 0; i < qtdNL; i++)
	{
		cout << "Digite um numero ";
		cin >> num;

		vet[i] = num;
	}

	cout << "Vetor: ";

	for (int i = 0; i < qtdNL; i++) {

		cout << vet[i] << " ";
	}
	cout << endl;
	cout << "Digite uma quantidade para realocar o vetor: ";
	cin >> qtdRealoc;

	qtdRealoc += qtdNL;

	if (qtdRealoc > qtdNL) {

		vet = (int*)realloc(vet, qtdRealoc * sizeof(int));

		for (int i = qtdNL; i < qtdRealoc; i++)
		{
			cout << "Digite numeros para preencher o restante do vetor ";
			cin >> num;

			vet[i] = num;
		}

		for (int i = 0; i < qtdRealoc; i++) {

			cout << vet[i] << " ";
		}
	}
	else {

		cout << "Erro";
	}

	free(vet);*/

	//Exercicio 4
	ArrayInt array;
	
	array.tamanhoM(4);
	array.preencherVetor();
	array.realocar();
	//array.addValor(4,6);
	array.removerValor(4);
	array.mostrarValores();
	

	system("pause");
	return 0;
}