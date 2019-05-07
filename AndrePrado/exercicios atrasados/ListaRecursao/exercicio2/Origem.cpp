#include<iostream>
#include<string>

using namespace std;

void palindromo(string texto, int n);
int i = 0;
bool palim = true;

int main()
{
	palindromo("andre", 5);


	

	system("pause");
	return 0;
}

void palindromo(string texto, int n) {
	if(n > 0)
	 if (texto[i] != texto[n-1] && i <= n)
		palim = false;

	 else if(i <= n){
		i++;
		palindromo(texto, --n);
	 }

	if (i <= n) {
		if (palim == true)
			cout << texto << " eh palimdromo\n";
		else
		{
			cout << texto << " nao eh palimdromo\n";
		}
	}
}