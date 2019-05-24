#pragma once
#include "Lista.h"
template<class T>
class Pilha :
	public Lista<T>
{
public:
	Pilha() {};
	~Pilha() {};
	void empilhar(T * elemento);
	T * desempilhar();
	T * topo();
};
template<class T>
void Pilha<T>::empilhar(T * elemento) {
	Lista<T>::insereFimLista(elemento);
}

template<class T>
T * Pilha<T>::desempilhar() {
	return Lista<T>::removeUltimoNo();
}

template<class T>
T * Pilha<T>::topo() {
	//return Lista<T>::obtemUltimoElemento();
}

