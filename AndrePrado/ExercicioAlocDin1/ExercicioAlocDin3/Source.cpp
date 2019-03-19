#include<iostream>

using namespace std;

int main()
{
	int *vetor, nPos, aux;

	cout << "Informe a quantidade de numeros lidos: ";
	cin >> nPos;
	aux = nPos;

	vetor = (int*)calloc(nPos,sizeof(int));

	for (int i = 0; i < nPos; i++) {
		cout << "Informe o " << i + 1 << " valor: ";
		cin >> vetor[i];
	}

	cout << "Os valores informados sao: \n";

	for (int i = 0; i < nPos; i++)
		cout << vetor[i] << " , ";

	cout << endl;

	cout << "Informe quantos numeros deseja adicionar: ";
	cin >> nPos;

	vetor = (int*)realloc(vetor, (aux + nPos) * sizeof(int));

	for (int i = (aux); i < (nPos + aux); i++) {
		cout << "Informe o " << i + 1 << " valor: ";
		cin >> vetor[i];
	}

	cout << "Os valores informados sao: \n";

	for (int i = 0; i < (aux + nPos); i++)
		cout << vetor[i] << " , ";

    free(vetor);
	system("pause");
	return 0;
}