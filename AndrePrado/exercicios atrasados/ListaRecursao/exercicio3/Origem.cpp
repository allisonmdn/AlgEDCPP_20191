#include<iostream>

using namespace std;

void somar(int *vec, int &t);

int soma = 0;

int main() {
	int t, *vetor;

	cout << "quantos numeros deseja informar: ";
	cin >> t;

	vetor = new int[t];

	for (int i = 0; i < t; i++) {
		cout << "informe o " << i+1 << " valor: ";
		cin >> vetor[i];
	}

	somar(vetor, t);

	system("pause");
	return 0;
}

void somar(int *vec, int &t) {
	if (t > 0) {
		soma += vec[t - 1];
		somar(vec, --t);
	}
	else {
		cout << "a soma de todos os elementos eh: " << soma << "\n";
	}
}