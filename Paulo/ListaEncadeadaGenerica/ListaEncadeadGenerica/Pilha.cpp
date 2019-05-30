#include "Pilha.h"


template<T>
Pilha::Pilha()
{
}

template<T>
Pilha::~Pilha()
{
}

template<class T>
void Pilha<T>::empilhar(T * elemento)
{
	Lista<T>::insereFimLista(elemento);
}

template<class T>
T * Pilha<T>::desempilhar()
{
	return Lista<T>::removeuUltimoNo();
}

template<class T>
T * Pilha<T>::topo()
{
	return Lista<T>::obterUltimoElemento();
}

template<class T>
bool Pilha<T>::pilhaVazia()
{
	return Lista<T>::listaVazia();
}

template<class T>
void Pilha<T>::esvaziarPilha()
{
	Lista<T>::esvaziarLista();
}
