#pragma once
#include "Lista.h"
template<class T>
class Pilha : public Lista<T>

{
public:
	Pilha() {};
	~Pilha() {};

	void empilhar(T * elemento);
	T * desempilhar(T * elemento);
	T * topo();
};

template<class T>
void Pilha<T>::empilhar(T * elemento)
{
	Lista<T>::lista->insereFimLista(elemento);
}

template<class T>
T * Pilha<T>::desempilhar(T * elemento)
{
	Lista<T>::lista->removerUltimoNo();
}

template<class T>
void Pilha<T>::topo()
{
	Lista<T>::lista->obterUltimoElemento();
}
