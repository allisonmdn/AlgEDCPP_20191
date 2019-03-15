#include<iostream>

using namespace std;

int main() {
	
	int qtdNl, numerosLidos, opcao;
	int *vetor;
	cout << "Informe a quantidade de valores a serem lidos: ";
	cin >> qtdNl;
	//alocacao dinamica
	vetor = new int[qtdNl];
	cout << "Informe os valores inteiros" << endl;
	for(int i = (qtdNl-1); i>=0;i--) {
		cin >> vetor[i];	
	}
	cout << "Nao inverso(1)/Inverso(2)?" << endl;
	cin >> opcao;
	cout << endl;

	if (opcao == 2) {

		for (int i = 0; i < qtdNl; i++) {

			cout << vetor[i] << endl;
		}
	}
	cout << endl;
	if (opcao == 1) {

		for (int i = (qtdNl - 1); i >= 0; i--) {

			cout << vetor[i] << endl;
		}
	}
	free(vetor);
	system("pause");
	return 0;
}