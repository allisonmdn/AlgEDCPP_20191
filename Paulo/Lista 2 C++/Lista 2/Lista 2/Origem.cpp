#include <iostream>
#include "Guerreiro.h"
using namespace std;
int main() {

	Guerreiro *guerreiro = new Guerreiro();

	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;

	cout << guerreiro->lutar() << endl;
	cout << guerreiro->lutar() << endl;
	cout << guerreiro->lutar() << endl;

	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;
	cout << guerreiro->treinar() << endl;

	cout << guerreiro->lutar() << endl;

	system("pause");
	return 0;
}