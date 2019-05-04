#include<iostream>

using namespace std;

void fibonacci(int n);

int i = 0;
int e = 0;

int main() {
	int n;

	cout << "Informe a quantos numeros deseja ter na sequencia Fibonacci: ";
	cin >> n;

	fibonacci(n);

	cout << "\n";

	system("pause");
	return 0;
}

void fibonacci(int n) {
	int aux;
	if (e <= n && i == 0) {
		i++;
		e += i;
		cout << 0 << " " << e << " " << e << " ";
		fibonacci(n);
	}
	else if (e <= n && i != 0) {
		
		aux = e;
		e += i; 
		i = aux;

		//if (i <= 2) 
			//cout << e << " ";
		

		//else
			cout << e << " ";
	

		fibonacci(n);
	}
}