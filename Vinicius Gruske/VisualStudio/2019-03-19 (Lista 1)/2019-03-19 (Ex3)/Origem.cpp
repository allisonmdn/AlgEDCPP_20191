#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ptb");

	int *vetor, nPos, nPosAux = 0;

	cout << "Informe a quantidade de n�meros a serem lidos: ";
	cin >> nPos;

	//vetor = (int*)calloc(nPos, sizeof(int));
	vetor = new int[nPos];

	for (int i = 0; i < nPos; i++) {
		cout << "Informe o " << i + 1 << "� valor: ";
		cin >> vetor[i];
	}

	cout << "Os valores informados s�o: " << endl;

	for (int i = 0; i < nPos; i++)
		cout << vetor[i] << " ";

	while (nPos != 0)
	{
		nPosAux += nPos;

		cout << endl << "Informe quantos n�meros deseja adicionar: ";
		cin >> nPos;

		vetor = (int*)realloc(vetor, (nPosAux + nPos) * sizeof(int));

		for (int i = 0; i < (nPos); i++) {
			cout << "Informe o " << i + 1 + nPosAux << "� valor: ";
			cin >> vetor[i + nPosAux];
		}

		cout << "Os valores informados s�o: " << endl;

		for (int i = 0; i < (nPosAux + nPos); i++)
			cout << vetor[i] << " ";
	}
	
	cout << endl;

	free(vetor);
	system("pause");
}