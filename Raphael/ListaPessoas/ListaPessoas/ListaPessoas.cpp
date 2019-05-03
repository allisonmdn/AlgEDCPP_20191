#include "ListaPessoas.h"



ListaPessoas::ListaPessoas()
{
	inicioLista = nullptr;
}


ListaPessoas::~ListaPessoas()
{
}

int ListaPessoas::inserePessoa(Pessoa * p)
{
	if (inicioLista == nullptr)
		inicioLista = p;
	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista->proxima != nullptr) {
			percorreLista = percorreLista->proxima;
		}
		percorreLista->proxima = p;

	}
	return 0;
}

int ListaPessoas::inserePessoaDecrescenteID(Pessoa * p)
{
	return 0;
}

int ListaPessoas::removePessoa()
{
	return 0;
}

int ListaPessoas::contarPessoas()
{
	int comprimentoLista = 0;
	if (inicioLista == nullptr)
		return 0;
	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista != nullptr) {
			percorreLista = percorreLista->proxima;
			comprimentoLista++;
		}
	}
	return comprimentoLista;
}

Pessoa * ListaPessoas::buscaPessoaPorID(int id)
{
	this->contarPessoas();
}

Pessoa * ListaPessoas::consultaPessoas()
{
	
	return 0;
}
