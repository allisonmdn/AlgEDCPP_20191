#pragma once
#include "Lista.h"

template<class T>
class Pilha : public Lista<T>
{
public:
	Pilha();
	~Pilha();
	void empilhar(T * elemento);
	T * desempilhar();
	T * topo();
	bool pilhaVazia();
	void esvaziarPilha();

};

