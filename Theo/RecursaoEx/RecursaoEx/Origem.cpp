#include<iostream>
#include<string>

using namespace std;

int soma = 0;

void inverte(string palavra, int i, int j)
{
	if (i <= 0 && j >= 3)
	{
		cout << palavra[i];
		cout << palavra[j];
		if (palavra[i] == palavra[j])
		{
			soma++;
		}
		if (soma == palavra.length())
		{
			cout << "Palindromo";
		}
		else
		{
			cout << "Nao palindromo";
		}
	}
	else
	{
		cout << palavra[i];
		cout << palavra[j];
		if (palavra[i] == palavra[j])
		{
			soma++;
		}
		inverte(palavra, i - 1, j + 1);
	}
}

void main()
{
	inverte("acs", 3, 0);
	system("pause");
}