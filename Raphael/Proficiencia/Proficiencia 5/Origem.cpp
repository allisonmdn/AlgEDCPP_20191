#include <iostream>

//5.Elabore um programa que :
//a.declare um vetor de inteiros de 10 posições,
//b.Preencha o mesmo com valores entre 20 e 50.
//c.Imprima o resultado da soma de todos os 10 valores preenchidos.


using namespace std;

int vetor[10], valor, soma = 0;

int main() {

	setlocale(LC_ALL, "ptb");

	cout << "Escreva 10 valores entre 20 e 50: ";

	int i = 0;
	do
	{
		cout << i + 1 << "º VALOR: ";
		cin >> valor;

		if (valor >= 20 && valor <= 50)
		{
			vetor[i] = valor;
			soma += valor;
			i++;
		}
		if (valor < 20 || valor > 50)
		{
			cout << "Valor inválido!" << endl;
		}
	} while (i < 10);

	cout << "A soma dos valore é: " << soma << endl;
	
	system("pause");
	return 0;
}