#include <iostream>
#include <string>
using namespace std;


//SOMA VETORES
int soma(int vetor[], int tamanho)
{
	if (tamanho <= 0)
	{
		return 0;
	}
	cout << tamanho << endl;
	return soma(vetor, tamanho - 1) + vetor[tamanho - 1];
}


//FIBBONACCI
int fibbonacci(int i) {
	if (i == 0 || i == 1) {
		return i;
	}
	else {
		return fibbonacci(i - 1) + fibbonacci(i - 2);
			
	}
}

//REVERTE STRING
string reverte(string in, int tamanho) {
	string revert;
	for (int i = tamanho - 1; i >= 0; i--) {
		revert += in[i];
	}
	return revert;
}

int main()
{
	int numeros[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "soma: " << soma(numeros, sizeof(numeros) / sizeof(numeros[0])) << endl;
	

	int numero;
	cout << "numero fib:";
	cin >> numero;

	for (int i = 0; i < numero; i++) {

		if (fibbonacci(i) <= numero)
		{
			cout << fibbonacci(i) << ",";
		} cout << endl;
	}


	cout << reverte("leo", 3) << endl;

	system("pause");
}