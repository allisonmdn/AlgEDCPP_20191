#include<iostream>

using namespace std;

int main()
{
	int *num,n=0;
	num = &n;
	*num = 10;
	cout << *num;
	cout << n;

	system("pause");
	return 0;
}