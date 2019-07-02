#include "Pilha.h"
#include <iostream>
using namespace std;
void main()
{
	Pilha<int> * obj = new Pilha<int>;
	obj->pop();
	obj->top();
	obj->push(10);
	obj->push(4);
	cout << "topo da pilha = " << obj->top() << endl;
	
	obj->pop();
	
	cout << "topo da pilha = " << obj->top() << endl;
		
	obj->push(11);
	obj->pop();
	cout << "topo da pilha = " << obj->top() << endl;
	obj->pop();
	obj->pop();
	obj->pop();

	bool param_4 = obj->empty();
	if (param_4)
		cout << "vazia";
	else
		cout << "não vazia";
	system("pause");
}