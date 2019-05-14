#include <iostream>
using namespace std;
int	potencia(int base, int expoente){
	if (expoente == 0) {
		return 1;
	}
	return base * potencia(base, expoente - 1);
}
int main() {
	cout << potencia(3,3) << endl;
	system("pause");
	return 0;
}