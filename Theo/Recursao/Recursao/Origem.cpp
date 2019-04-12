#include<iostream>
#include<string>

using namespace std;

/*int potencia(int base, int exp)
{
	if (exp == 0)
	{
		return 1;
	}
	else
	{
		return base * potencia(base, exp - 1);
	}
}*/



int fat(int num)
{
	if (num == 0)
	{
		return 1;
	}
	else
	{
		return num * fat(num - 1);
	}
}

//potencia(3,3)
//3 * potencia(3,2)
//3 * 3 * potencia(3,1)
//3 * 3 * (3 * 1)

int main()
{
	int n = 0;
	//cout << potencia(3, 3);
	cout << "Informe o numero: ";
	cin >> n;
	cout << fat(n);


	system("pause");
	return 0;
}