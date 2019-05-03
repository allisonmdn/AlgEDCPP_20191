#pragma once
#include"Pessoa.h"
class ListaPessoas
{
public:
	ListaPessoas();
	~ListaPessoas();

	Pessoa * inicioLista;

	//metodos
	int inserePessoa(Pessoa *p);
	int removePessoa();
	int contarPessoas();
	Pessoa * buscaPessoaPorID(int id);
};

