#pragma once
#include "Lista.h"
template <class T>
class Fila 
{
public:
	Fila() {};
	~Fila() {};
	bool inserirElementoFila(T * elemento); //true - sucesso; false - falha
	T * removerPrimeiroFila();//Elemento - sucesso; nullptr - falha | RemoveN�Lista
	T * obterPrimeiroFila(); //Elemento - sucessos; nullptr - falha | N�oRemoveN�Lista
	T * removerUltimoFila(); //Elemento - sucesso; nullptr - falha | RemoveN�Lista
	T * obterUltimoFila(); //Elemento - sucesso; nullptr - falha | N�oRemoveN�Lista
	int obterTamanhoFila();
	bool esvaziarFila();
	bool vazia();
private:
	Lista<T> * fila = new Lista<T>;
};
template <class T>
bool Fila<T>::inserirElementoFila(T * elemento) {
	fila->insereFimLista(elemento);
	return true;
}
template <class T>
T * Fila<T>::removerPrimeiroFila() {
	T * primElemento = fila->obterPrimeiroElemento();
	fila->removerPrimeiroNo();
	return primElemento;
}

template <class T>
T * Fila<T>::obterPrimeiroFila() {
	return fila->obterPrimeiroElemento();
}

template <class T>
T * Fila<T>::removerUltimoFila() {
	T * ultimoElemento = fila->obterUltimoElemento();
	fila->removerUltimoNo();
	return ultimoElemento;
}

template <class T>
T * Fila<T>::obterUltimoFila() {
	T * ultimoElemento = 
	return fila->obterUltimoElemento();
}
template <class T>
int Fila<T>::obterTamanhoFila() {
	return fila->obtemTamanhoLista();
}
template <class T>
bool Fila<T>::esvaziarfila()
{
	return fila->esvaziaLista;
}