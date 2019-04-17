#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;



int inverte(char *n, int y, int aux) {
	if (y <= aux) return 1;
	else {
		if (n[y - 1] != n[aux]) return 0;

		return inverte(n, y - 1, aux + 1);
	}
}


int palindromo(char *n) {
	int aux1, x = 0;

	aux1 = inverte(n, strlen(n), x);

	if (aux1 == 1) cout << ("Eh palindromo") << endl;
	else cout << ("Nao eh palindromo") << endl;
	return aux1;

}


int main() {


	palindromo("banana");
	palindromo("anna");
	palindromo("ana");
	palindromo("receita");



	system("pause");
	return 0;
}
