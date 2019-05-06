#include<iostream>
#include<string>

using namespace std;

int numeros[5];
int num = 0, soma = 0, i = 0;
int somar(int n)
{
	if (i > 5)
	{
		return soma;
	}
	else
	{
		soma += num;
		cout << "Digite um numero";
		cin >> num;
		numeros[0 + i] = num;
		i++;
		somar(num);
			
	}
}

int main()
{
	somar(5);
	system("pause");
	return 0;
}