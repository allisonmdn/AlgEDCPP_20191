#pragma once
#include "No.h"
#include "Pessoa.h"
#include "Lista.h"
class ListaPessoas : public Lista<Pessoa>
{
public:
	ListaPessoas();
	~ListaPessoas();
	No<Pessoa> * lista_pessoas, * lista_pessoas_aux;
	void percorreLista(No<Pessoa>* lista);
	void insereFimLista(Pessoa * p);

};

