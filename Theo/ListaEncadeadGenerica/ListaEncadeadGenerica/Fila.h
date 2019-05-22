#pragma once
#include "Lista.h"
template<class T>
class Fila
{
public:
	Fila();
	~Fila();
	bool inserirElementoFila(T * elemento); //true - Sucesso; False - falha
	T * removerPrimeiroFila(); //Elemento - Sucessso; nullptr - falha | removeONÛDaLista;
	T * obtemPrimeiroDaFila();
	T * removerUltimoFila();
	T * obtemUltimoDaFila();
	bool filaVazia();//true = vazia; false = n„o vazia
	void esvaziaFila();
	bool contemNaFila(T * elemento, No<T> param_lista = this->lista);
private:
	Lista<T> fila = new Lista<T>;
};

