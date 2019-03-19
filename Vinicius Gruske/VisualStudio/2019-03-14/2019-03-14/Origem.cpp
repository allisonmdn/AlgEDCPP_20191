#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ptb");

	int numeros_lidos, qtd_nl, opcao;
	//int* vetor;
	int *vetor;
	

	cout << "Informe a quantidade de valores a serem lidos: ";
	cin >> qtd_nl;
	
	//vetor = (int*)calloc(qtd_nl, sizeof(int));
	vetor = new int[qtd_nl];

	cout << "Informe os valores inteiros:" << endl;

	for (int n = 0; n < qtd_nl; n++)
	{
		cin >> vetor[n];
	}

	cout << "Digite 0 para ordem direta, e, !0 para reversa: ";
	cin >> opcao;
	if (opcao == 0)
	{
		for (int n = 0; n < qtd_nl; n++)
		{
			cout << vetor[n] << " ";
		}
	}
	else
	{
		for (int n = qtd_nl - 1; n >= 0; n--)
		{
			cout << vetor[n] << " ";
		}
	}
	
	cout << endl;

	free(vetor);
	system("pause");
}