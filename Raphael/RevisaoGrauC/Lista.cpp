#include "Lista.h"
#include <iostream>


Lista::Lista()
{
	this->inicio_lista = nullptr;
	tamanho = 0;
}


Lista::~Lista()
{
}

void Lista::insereNaLista(char elemento)
{
	Nodo * no = new Nodo(elemento);
	
	if (inicio_lista == nullptr) {
		inicio_lista = no;
		final_lista = no;
	}
	else {
		final_lista->setProximo(no);
		final_lista = no;
	}
	tamanho++;
}

void Lista::removeFinalLista()
{
	Nodo * aux;
	aux = inicio_lista;
	while (aux->getProximo() != final_lista) {
		aux = aux->getProximo();
	}
	delete final_lista;
	final_lista = aux;
	final_lista->setProximo(nullptr);
	tamanho--;
}

void Lista::percorreLista() {
	Nodo * aux;
	aux = this->inicio_lista;
	do {
		std::cout << aux->getElemento() << std::endl;
		aux = aux->getProximo();
	} while (aux != final_lista);		
	std::cout << aux->getElemento() << std::endl;
}


