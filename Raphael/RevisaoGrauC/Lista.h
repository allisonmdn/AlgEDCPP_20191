#pragma once
#include "Nodo.h"
class Lista
{
public:
	Lista();
	~Lista();
	void insereNaLista(char elemento);
	void removeFinalLista();
	void percorreLista();
private:
	Nodo * inicio_lista, * final_lista;
	int tamanho;


};

