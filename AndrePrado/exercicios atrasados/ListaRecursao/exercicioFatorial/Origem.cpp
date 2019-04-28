#include<iostream>

using namespace std;

int fatorial(int n);

int main() {
	int n;

	cout << "Informe um numero para calcular o fatorial: ";
	cin >> n;

	cout << "fatorial de " << n << " eh igual a: " << fatorial(n) << "\n";

	system("pause");
	return 0;
}

int fatorial(int n) {
	if (n == 0 || n == 1)
		return 1;

	else
		return(n * fatorial(n - 1));
}