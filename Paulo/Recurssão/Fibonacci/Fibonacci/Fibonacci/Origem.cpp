#include <iostream>
using namespace std;
int fibo(int num) {
	if (num == 1 || num == 2)
		return 1;
	else
		return fibo(num - 1) + fibo(num - 2);
}
int main() {
	int posicao;

	cout << "Digite a quantidade de posicoes: ";
	cin >> posicao;

	for (int i = 1; i <= posicao; i++){
		cout << "[" << i << "]" << "\t" << fibo(i) << endl;
	
	}
	system("pause");
	return 0;
}