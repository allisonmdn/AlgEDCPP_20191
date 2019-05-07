#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

int main() {

	int num;

	int *vetor = (int*)calloc(10, sizeof(int));

	vetor = (int *)realloc(vetor, 15 * sizeof(int));

	cin >> num;

	cout << num << endl;

	free(vetor);


	system("pause");
	return 0;
}