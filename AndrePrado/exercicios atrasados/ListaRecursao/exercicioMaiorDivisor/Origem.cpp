#include<iostream>

using namespace std;

int maiorDivisorComum(int m, int n);

int *divM, *divN;
int e, i, aux;

int main() {
	int m, n;

	cout << "informe dois valores para serem calculados o seu maior divisor comum: ";
	cout << "informe o 1 valor: ";
	cin >> m;

	cout << "informw o 2 valor: ";
	cin >> n;

	e = m;
	i = n;
	divM = new int[m];
	divN = new int[n];

	//nao esta funcionando
	cout << "o maior divisor entre " << m << " e " << n << " eh: " << maiorDivisorComum(m, n) << "\n";

	delete[] divM;
	delete[] divN;

	system("pause");
	return 0;
}

int maiorDivisorComum(int m, int n) {
	if (m > 0) {
		divM[m] = (e / m);
	}	

	if (n > 0){
		divN[n] = (i / n);
	}

	if (divM[m] % 2 == 1) {
		divM[m] = 0;
	}
	
	if (divN[n] % 2 == 1) {
		divM[n] = 0;
	}

	if (divM[m] == divN[n] && (divM[m] > 0 && divN[n] > 0)) {
		if (aux < divM[m] || aux < divN[n])
			aux = divM[m];	
	}
	if(m > 0 && n > 0)
		maiorDivisorComum(--m, --n);

	else if (m > 0 && n <= 0)
		maiorDivisorComum(--m, n);

	else if (m <= 0 && n > 0)
		maiorDivisorComum(m, --n);

	else {
		return aux;
	}
}