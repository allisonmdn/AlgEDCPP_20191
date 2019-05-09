#include <iostream>

int fatorial(int i)
{
	if (i == 1)
	{
		return 1;
	}
	else
	{
		return i * fatorial(i - 1);
	}
		
	
}

int main()
{
	int n;
	std::cout << "Digite um numero: ";
	std::cin >> n;

	fatorial(n);
	
	std::cout << fatorial(n) << "\n";

	system("pause");
	return 0;
}