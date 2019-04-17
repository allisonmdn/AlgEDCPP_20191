#include <cstdlib>
#include <iostream>
#include <string>

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



int main()
{

	inverte(" ovo ", 3);

	cout << endl;

	system("pause");
	return 0;
}
