#include <iostream>
#include "ArrayInt.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "ptb");

	ArrayInt vetor(1);

	vetor.adiciona(1);
	vetor.adiciona(2);

	cout << vetor.obterValor() << endl;


	system("pause");
}