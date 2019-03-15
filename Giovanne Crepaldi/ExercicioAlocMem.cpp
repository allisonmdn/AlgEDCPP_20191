#include <iostream>

using namespace std;

void main() {

	int numeros_lidos, qtd_nl, opcao;
	int* vetor;
	cout << "Informe a quantidade de valores a serem lidos" << endl;
	cin >> qtd_nl;


	//alocação dinâmica
	vetor = (int*)calloc(qtd_nl, sizeof(int));
	cout << "informe os "<< qtd_nl <<" valores inteiros" << endl;
	for (int i = (qtd_nl - 1); i >= 0; i--) {
		cin >> vetor[i];
		
	}

	cout << "Informe 1 - Impressao ordem direta;" << endl << "Informe 2 - Impressao inversa" << endl;
	cin >> opcao;
	if (opcao == 1)
		for (int i = (qtd_nl-1); i >= 0; i--)
			cout << "Numero: " << vetor[i] << endl;
	if (opcao == 2)
		for (int i = 0; i < qtd_nl; i++)
			cout << "Numero: " << vetor[i] << endl;

	free(vetor);
	system("pause");
}