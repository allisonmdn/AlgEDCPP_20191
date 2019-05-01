#include <iostream>
#include <string>
#include "atirador.h"
using namespace std;

int main() {

	atirador atira(0);

	cout << atira.trocarDeArma(0);
	cout << atira.tomarDano(20);

	system("pause");
}