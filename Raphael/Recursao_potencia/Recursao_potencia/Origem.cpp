#include<iostream>
#include<string>

int potencia(int base, int exp) {
	if (exp == 0)
		return 1;
	return base * potencia(base, exp-1);
}
//potencia(3,3)
//3 * potencia(3,2)
//3 * 3 * potencia (3,1)
//3 * 3 * 3 * potencia (3,0)
//(3 * (3 * (3 * 1)))) = 27
void main() {

	std::cout << potencia(3, 3);
	system("pause");
}