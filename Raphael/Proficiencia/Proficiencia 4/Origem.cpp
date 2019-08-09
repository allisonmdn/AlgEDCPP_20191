#include <iostream>

using namespace std;

/*4.Implemente um programa que receba como entrada somente números
inteiros positivos e imprima apenas os que estejam no intervalo de 5 a 15.
O Programa deve terminar quando for digitado o valor 0.*/

int main() {
	int num;
	cout << "Caso queira parar o programa digite 0" << endl;
	cout << endl;

	cout << "digite um numero entre 5 e 15" << endl;
	cin >> num;
	

	while (num != 0)
	{
		
		if (num > 4 && num < 16)
		{

			cout << " Este numero esta dentro dos numeros 5 e 15: " <<num<< endl;
		}
		cout << "digite um numero entre 5 e 15" << endl;
		cin >> num;
	}

	system("pause");
	return 0;
}