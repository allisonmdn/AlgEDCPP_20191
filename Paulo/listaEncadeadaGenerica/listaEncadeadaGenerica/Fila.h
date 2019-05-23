#pragma once
#include "Lista.h"
template <class T>
class Fila
{
public:
	Fila() {};
	~Fila() {};
	bool *inserirElementoFila(T *elemento); //true - sucesso; false - falha
	T * removerPrimeiroFila(); //Elemento - sucesso; nullptr - falha | RemoveNÛLista
	T * obterPrimeiroFila(); //Elemento - sucesso; nullptr - falha | N„oRemoveNÛLista
	T * removerUltimoFila(); //Elemento - sucesso; nullptr - falha | RemoveNÛLista
	T * obterUltimoFila(); //Elemento - sucesso; nullptr - falha | N„oRemoveNÛLista
	int obterTamanhoFila();
	bool esvaziarFila();
	bool vazia();

private:
	Lista<T> * fila = new Lista<T>;
};

template<class T>
Fila<T>::Fila(){
}

template<class T>
Fila<T>::~Fila(){
}

template <class T>
bool * Fila<T>::inserirElementoFila(T *elemento) {
	fila->insereFimLista(elemento);
	return true;
}

template <class T>
T * Fila<T>::removerPrimeiroFila() {
	T * primElemento = fila->obtemPrimeiroElemento();
	fila->removerPrimeiroNo();
	return primElemento;
}

template <class T>
T * Fila<T>::obterPrimeiroFila() {
	return fila->obtemPrimeiroElemento();
}

template <class T>
T * Fila<T>::removerUltimoFila() {
	T * ultimoElemento = fila->obterUltimoElemento();
	fila->removeUltimoNo();
	return ultimoElemento;
}

template <class T>
T * Fila<T>::obterUltimoFila() {
	return fila->obterUltimoElemento();
}

template<class T>
bool Fila<T>::esvaziarFila(){


	return false;
}
