#include "ListaPessoas.h"



ListaPessoas::ListaPessoas()
{
	inicioLista = nullptr;
}


ListaPessoas::~ListaPessoas()
{
}

int ListaPessoas::inserePessoa(Pessoa *p)
{
	if (inicioLista == nullptr)
		inicioLista = p;

	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista->proxima != nullptr)
		{
			percorreLista = percorreLista->proxima;
		}
		percorreLista->proxima = p;
	}
		

	return 0;
}

int ListaPessoas::removePessoa()
{
	return 0;
}

int ListaPessoas::contarPessoas()
{
	int ComprimentoLista = 0;
	if (inicioLista == nullptr)
		return 0;

	else {
		Pessoa * percorreLista = inicioLista;
		while (percorreLista != nullptr)
		{
			percorreLista = percorreLista->proxima;
			ComprimentoLista++;
		}
	}
	return ComprimentoLista;
}

Pessoa * ListaPessoas::buscaPessoaPorID(int id)
{
	Pessoa * percorreLista = inicioLista;
	if (id == inicioLista->id)
		return inicioLista;

	else {
		while (id != percorreLista->id && percorreLista->proxima != nullptr)
		{
			percorreLista = percorreLista->proxima;
		}
		if (percorreLista->id == id)
			return percorreLista;

		else
			return nullptr;
	}
	return nullptr;
}
