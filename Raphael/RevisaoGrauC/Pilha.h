#pragma once
#include"Nodo.h"
class Pilha
{
public:
	Pilha();
	~Pilha();

	void push(char c);
	int size();
	bool empty();
	char top();
	void pop();
	bool find(char c);

private:
	Nodo * base;
	Nodo * topo;
	int tam;

};

