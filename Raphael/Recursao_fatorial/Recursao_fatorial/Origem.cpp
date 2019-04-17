#include <iostream>
int fat(int num) {
	if (num == 1)
		return 1;
	else
		return num*fat(num - 1);
}
//fat(5);
//5 * fat(4);
//5 * 4 * fat(3);
//5 * 4 * 3* fat (2);
//5 * 4 * 3 * 2 * fat(1);
//5 * 4 * 3 * 2 * 1 = 120;

void main() {
	int n = 0;
	std::cout << "Informe um inteiro positivo" << std::endl;
	std::cin >> n;
	std::cout << fat(n);
	system("pause");
}
