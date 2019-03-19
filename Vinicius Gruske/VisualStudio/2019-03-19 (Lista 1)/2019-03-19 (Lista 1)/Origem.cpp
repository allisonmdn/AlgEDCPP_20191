#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ptb");

	int *vetor, nPos;

	cout << "Informe a quantidade de números a serem lidos: ";
	cin >> nPos;

	//vetor = (int*)calloc(nPos, sizeof(int));
	vetor = new int[nPos];

	for (int i = 0; i < nPos; i++) {
		cout << "Informe o " << i + 1 << "º valor: ";
		cin >> vetor[i];
	}

	cout << "Os valores informados são: " << endl;

	for (int i = 0; i < nPos; i++)
		cout << vetor[i] << " ";

	cout << endl;

	free(vetor);
	system("pause");
}