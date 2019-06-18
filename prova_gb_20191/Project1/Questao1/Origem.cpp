#include "Pilha.h"

void main()
{
	Pilha<int> * obj = new Pilha<int>;
	obj->push(10);
	
	int param_2 = obj->pop();
	int param_3 = obj->top();
	obj->push(11);
	bool param_4 = obj->empty();

}