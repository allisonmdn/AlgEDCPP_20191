#include <iostream>
#include <vector>

using namespace std;

int main() {

	int *vetor = new int[5];
	int resp;

	for (int i = 0; i < 5; i++) {
		cout << "Digite um numero:" << endl;
		cin >> resp;

		vetor[i] = resp;
	}

	for (int i = 0; i < 5; i++) {
		cout << endl << vetor[i] << endl;
	}

	delete vetor;

	system("pause");
	return 0;
}