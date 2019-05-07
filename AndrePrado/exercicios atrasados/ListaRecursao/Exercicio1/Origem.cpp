#include<iostream>
#include<string>

using namespace std;

void inverte(string texto, int n);

int main()
{
	inverte("abc", 3);

	cout << "\n";

	system("pause");
	return 0;
}

void inverte(string texto, int n) {
	if (n > 0) {
		cout << texto[n - 1];
		inverte(texto, --n);
	}
}