#include<iostream>

using namespace std;

int main()
{
	int *vetor, nPos;

	cout << "Informe a quantidade de numeros lidos: ";
	cin >> nPos;

	vetor = (int*)calloc(nPos, sizeof(int));

	for (int i = 0; i < nPos; i++) {
		cout << "Informe o " << i + 1 << " valor: ";
		cin >> vetor[i];
	}

	cout << "Os valores informados sao: \n";

	for (int i = 0; i < nPos; i++)
		cout << vetor[i] << " , ";

	cout << endl;


	free(vetor);
	system("pause");
	return 0;
}