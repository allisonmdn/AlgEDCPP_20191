#include <iostream>
using namespace std;
int main()
{
	int x, y, numeros_lidos, opcao;
	int* vetor;
	cout << "quantos numeros?" << endl << endl;
	cin >> x;
	vetor = (int*)calloc(x, sizeof(int));
	y = x;
	cout << endl << endl <<  "informe os valores" << endl << endl;
	while (y > 0)
	{
		cin >> vetor[y-1];
		y--;
	}
	cout << endl << endl << "informe 1 para ordem normal. informe 2 para ordem inversa" << endl << endl;
	cin >> opcao;
	cout << endl << endl;

	if (opcao == 1)
	{
		y = x-1;
		for (; y >= 0; y--)
		{
			cout << vetor[y] << endl;
		}
	}
	if (opcao == 2)
	{
		y = 0;
		for (; y <= x-1; y++)
		{
			cout << vetor[y] << endl;
		}
	}
	free(vetor);

	system("pause");
	return 0;
}