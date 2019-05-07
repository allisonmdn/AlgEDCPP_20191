#include <iostream>
int fat(int num) {
	if (num == 1)
		return 1;
	else
		return num*fat(num - 1);
}

int potencia(int base, int exp) {
	if (exp == 0)
		return 1;
	return base * potencia(base, exp - 1);
}

void main() {
	//Ex 1
	int n = 0;
	std::cout << "Informe um inteiro positivo" << std::endl;
	std::cin >> n;
	std::cout << fat(n);

	//Ex 2
	std::cout << potencia(3, 3);
	system("pause");
}
