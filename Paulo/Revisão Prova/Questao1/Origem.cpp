#include "Pilha.h"
#include <iostream>
using namespace std;
void main()
{
	Pilha<int> * obj = new Pilha<int>;
	obj->push(10);
	obj->push(4);

	cout << "topo da pilha = " << obj->top() << endl;

	int param_2 = obj->pop();

	cout << "topo da pilha = " << obj->top() << endl;

	int param_3 = obj->top();

	cout << "topo da pilha = " << obj->top() << endl;

	obj->push(11);

	bool param_4 = obj->empty();
	if (param_4) {
		cout << "vazia";
	}
	else {
		cout << "nao vazia";
	}

	system("pause");
}