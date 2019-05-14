#include <iostream>
using namespace std;
int	fatorial(int numero) {
	if (numero == 0) {
		return 1;
	}
	else
		return numero * fatorial (numero - 1);
}
int main() {
	int num;
	cout << "Digite um numero inteiro positivo: ";
	cin >> num;
	cout << fatorial(num) << endl;
	system("pause");
	return 0;
}