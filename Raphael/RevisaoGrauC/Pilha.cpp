#include "Pilha.h"



Pilha::Pilha()
{
	tam = 0;
	topo = new Nodo;
	base = new Nodo;
}


Pilha::~Pilha()
{
}

void Pilha::push(char c)
{
	if (tam == 0) {
		topo->setElemento(c);
		topo->setProximo(nullptr);
		base->setElemento(c);
		base->setProximo(nullptr);
		tam++;
	}
	else {
		topo = topo->getProximo();
		topo->setElemento(c);
		topo->setProximo(nullptr);
		tam++;
	}
}

int Pilha::size()
{
	return tam;
}

bool Pilha::empty()
{
	if (tam == 0) {
		return true;
	}
	else {
		return false;
	}
}

char Pilha::top()
{
	if (tam != 0) {
		return topo->getElemento();
	}
}

void Pilha::pop()
{
	Nodo* r = base;
	if (tam != 0) {
		while (r->getProximo()->getElemento() != topo->getElemento()) {
			r = r->getProximo();
		}
		delete r->getProximo();
		topo = r;
		tam--;
	}
}

bool Pilha::find(char c)
{
	Nodo * r = base;
	if (tam == 0) {
		return false;
	}

	else {
		while (r->getElemento() != c) {
			if (r == nullptr) {
				return false;
			}
			r = r->getProximo();
		}
		return true;
	}
}
