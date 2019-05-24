#pragma once
#include "Lista.h"
template <class T>
class Pilha
{
public:
	Pilha() {};
	~Pilha() {};
	bool inserirElementoPilha(T * elemento); //true - sucesso; false - falha
	void empilhar(T*elemento);

	T * removerPrimeiroPilha();//Elemento - sucesso; nullptr - falha | RemoveN�Lista
	T * obterPrimeiroPilha(); //Elemento - sucessos; nullptr - falha | N�oRemoveN�Lista
	T * removerUltimoPilha(); //Elemento - sucesso; nullptr - falha | RemoveN�Lista
	T * obterUltimoPilha(); //Elemento - sucesso; nullptr - falha | N�oRemoveN�Lista
	int obterTamanhoPilha();
	bool esvaziarPilha();
	bool vazia();
};

template<class T>
bool Pilha<T>::inserirElementoPilha(T * elemento)
{
	return false;
}

template<class T>
inline T * Pilha<T>::removerPrimeiroPilha()
{
	return ;
}

template<class T>
T * Pilha<T>::obterPrimeiroPilha()
{
	return NULL;
}

template<class T>
T * Pilha<T>::removerUltimoPilha()
{
	return NULL;
}

template<class T>
T * Pilha<T>::obterUltimoPilha()
{
	return NULL;
}

template<class T>
int Pilha<T>::obterTamanhoPilha()
{
	return 0;
}

template<class T>
bool Pilha<T>::esvaziarPilha()
{
	pilha->esvaziaLista();
	return true;
}

template<class T>
bool Pilha<T>::vazia()
{
	return fila->listavazia();
}

