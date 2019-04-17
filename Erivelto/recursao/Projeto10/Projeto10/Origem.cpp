#include <cstdlib>
#include <iostream>

int fatorial(int n) {

	if (n == 0)
		return 1;


	else
		return n * fatorial(n - 1);

}

using namespace std;

int main()
{
	int resultado, m;
	cout << " digite o numero para calcular o fatorial " << endl;
	cin >> m;

	resultado = fatorial(m);
	cout << " o fatorial de " << m << " eh: " << (resultado) << endl;


	system("pause");
	return 0;
}
