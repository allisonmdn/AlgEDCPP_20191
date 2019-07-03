#include "Nodo.h"



Nodo::Nodo()
{
	this->proximo = nullptr;
}


Nodo::~Nodo()
{
}

Nodo::Nodo(char elem)
{
	elemento = elem;
}

void Nodo::setProximo(Nodo * prox)
{
	proximo = prox;
}

void Nodo::setElemento(char elem)
{
	this->elemento = elem;
}

Nodo * Nodo::getProximo()
{
	return proximo;
}

char Nodo::getElemento()
{
	return elemento;
}
