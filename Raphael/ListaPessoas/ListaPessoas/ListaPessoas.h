#pragma once
#include "Pessoa.h"
class ListaPessoas
{
public:
	Pessoa * inicioLista;
	ListaPessoas();
	~ListaPessoas();
	int inserePessoa(Pessoa * p);
	int inserePessoaDecrescenteID(Pessoa * p);
	int removePessoa();
	int contarPessoas();
	Pessoa * buscaPessoaPorID(int id);
	Pessoa * consultaPessoas(); 
};

