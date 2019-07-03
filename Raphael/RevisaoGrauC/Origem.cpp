#include"Pilha.h"
#include<iostream>
#include"Lista.h"
using namespace std;

int main() {

	Lista l;
	l.insereNaLista('a');
	l.insereNaLista('b');
	l.removeFinalLista();
	l.insereNaLista('c');
	l.percorreLista();
	
	/*

	Pilha pilha;

	cout << pilha.empty() << endl;
	cout << pilha.size() << endl;
	pilha.push('a');
	cout << endl;
	cout << pilha.empty() << endl;
	cout << pilha.size() << endl;
	cout << pilha.top() << endl;
	cout << pilha.size() << endl;
	pilha.push('b');
	cout << endl;
	cout << pilha.empty() << endl;
	cout << pilha.size() << endl;
	cout << pilha.top() << endl;
	pilha.pop();
	cout << endl;
	pilha.find('b');
	pilha.top();
	pilha.size();
	*/
	system("pause");
	return 0;
}