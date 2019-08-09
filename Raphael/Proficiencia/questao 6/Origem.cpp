#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
	int vet[10], maior = INT_MIN, menor = INT_MAX, aux;
	srand(time(0));

	for (int i = 0; i < 10; i++) {
		vet[i] = rand() % 15;
		if (vet[i] > maior) {
			maior = vet[i];
		}
		else if (vet[i] < menor) {
			menor = vet[i];
		}
		cout << vet[i] << "\t";
	}

	cout << "\n\ninvertido: " << endl;
	for (int i = 0; i < 10; i++) {
		cout << vet[9 - i] << "\t";
	}

	cout << "\n\nmaior: " << maior << endl;
	cout << "menor: " << menor << endl;

	aux = vet[0];

	cout << "\n\nrotacao a esquerda: " << endl;
	for (int i = 0; i < 9; i++) {
		vet[i] = vet[i + 1];
		cout << vet[i] << "\t";
	}
	vet[9] = aux;
	cout << vet[9] << endl;

	system("pause");
	return 0;

}