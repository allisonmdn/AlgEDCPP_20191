#include "ListaPessoas.h"



ListaPessoas::ListaPessoas()
{
	inicioLista = nullptr;
	comprimentoLista = 0;
}


ListaPessoas::~ListaPessoas()
{
}

int ListaPessoas::inserePessoa(Pessoa *pessoas)
{
	if (inicioLista == nullptr)
	{
		inicioLista = pessoas;
	}
	else
	{
		Pessoa *percorreLista = inicioLista;
		
		while (percorreLista->proxima != nullptr)
		{
			percorreLista = percorreLista->proxima;
		}
		
		percorreLista->proxima = pessoas;
	}
	return 0;
}

int ListaPessoas::removePessoa()
{
	return 0;
}

int ListaPessoas::contarPessoas()
{
	if (inicioLista == nullptr)
	{
		return 0;
	}
	else
	{
		Pessoa *percorreLista = inicioLista;

		while (percorreLista != nullptr)
		{
			percorreLista = percorreLista->proxima;
			comprimentoLista++;
		}
	}
	return comprimentoLista;
}

Pessoa * ListaPessoas::buscaPessoaPorID(int id)
{
	if (inicioLista == nullptr)
	{
		return nullptr;
	}
	else
	{
		Pessoa *percorreLista = inicioLista;
		while (inicioLista->ID != id && percorreLista->proxima != nullptr)
		{
			percorreLista = percorreLista->proxima;
			if (percorreLista->ID == id)
			{
				return percorreLista;
			}
		}
	}

	return nullptr;
}


