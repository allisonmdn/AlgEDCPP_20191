#include <iostream>
#include <string>

using namespace std;

int main() {
	int ordem;
	int *vetor = (int*)calloc(3, sizeof(int));

	cout << "informe os valores" << endl;

	for (int i = 0; i < 3; i++) {
		cin >> vetor[i];
	}
	cout << "ordem normal (1) ou inversa (2)?" << endl;
	cin >> ordem;
	if (ordem == 1) {
		for (int i = 0; i < 3; i++) {
			cout << vetor[i] << endl;
		}
	}
	else if (ordem == 2) {
		for (int i = 3; i > 0; i--) {
			cout << vetor[i - 1] << endl;
		}
	} //fim ex1+2

	vetor = (int*)realloc(vetor, 6 * sizeof(int));
	cout << "informe os novos valores" << endl;

	for (int i = 3; i < 6; i++) {
		cin >> vetor[i];
	}

	cout << "os novos valores sao:" << endl;
	for (int i = 0; i < 6; i++) {
		cout << vetor[i] << endl;
	}

	free(vetor);//fim ex3

	system("pause");
	return 0;
}