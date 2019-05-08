#pragma once
#include"Pessoa.h"
#include<iostream>
class ListaPessoas
{
public:
	ListaPessoas();
	~ListaPessoas();

	Pessoa * inicioLista;

	//metodos
	int inserePessoa(Pessoa *p);
	int removePessoa(int id);
	int contarPessoas();
	Pessoa * buscaPessoaPorID(int id);
};

