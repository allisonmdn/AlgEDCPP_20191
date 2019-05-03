#pragma once
#include "Pessoa.h"

#include <iostream>

class ListaPessoas
{
public:
	Pessoa *inicioLista;
	ListaPessoas();
	~ListaPessoas();
	int inserePessoa(Pessoa *pessoas);
	int removePessoa();
	int contarPessoas();
	Pessoa * buscaPessoaPorID(int id);

	int comprimentoLista;
};

