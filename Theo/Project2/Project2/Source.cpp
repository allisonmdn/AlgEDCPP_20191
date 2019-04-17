#include<iostream>
#include<string>

using namespace std;

void inverte(string palavra, int i)
{
	if (i <= 0)
	{
		cout << palavra[i];
	}
	else
	{
		cout << palavra[i];
		inverte(palavra, i - 1);
	}
}

void main()
{
	inverte("eriveltoGostoso", 15);
	system("pause");
}