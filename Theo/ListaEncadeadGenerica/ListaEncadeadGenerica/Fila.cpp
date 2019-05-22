#include "Fila.h"


template<class T>
Fila::Fila()
{
}

template<class T>
Fila::~Fila()
{
}

template<class T>
bool Fila<T>::inserirElementoFila(T * elemento)
{
	fila->insereFimLista(elemento);
	return true;
}

template<class T>
T * Fila<T>::removerPrimeiroFila()
{
	T * primeiroElemento = fila->obtemPrimeiroElemento();
	fila->removerPrimeiroNo();
	return primeiroElemento;
}

template<class T>
T * Fila<T>::obtemPrimeiroDaFila()
{
	return fila->obtemPrimeiroElemento();
}

template<class T>
T * Fila<T>::removerUltimoFila()
{
	T * ultimoElemento = fila->obtemUltimoElemento();
	fila->removeUltimoNo();
	return ultimoElemento;
}

template<class T>
T * Fila<T>::obtemUltimoDaFila()
{
	return fila->obtemUltimoElemento();
}
