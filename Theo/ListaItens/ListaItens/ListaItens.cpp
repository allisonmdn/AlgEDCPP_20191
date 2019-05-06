#include "ListaItens.h"



ListaItens::ListaItens()
{
	inicioLista = nullptr;
	comprimentoLista = 0;
}


ListaItens::~ListaItens()
{
}

int ListaItens::insereItem(Itens * item)
{
	if (inicioLista == nullptr)
	{
		inicioLista = item;
	}
	else
	{
		Itens *percorreLista = inicioLista;
		while (percorreLista->proxima != nullptr)
		{
			percorreLista = percorreLista->proxima;
		}

		percorreLista->proxima = item;
	}

	return 0;
}

int ListaItens::removeItem(int ID)
{
	if (inicioLista == nullptr)
	{
		return 0;
	}
	else
	{
		Itens *percorreLista = inicioLista;
		if (percorreLista != nullptr)
		{
			percorreLista = percorreLista->proxima;
			comprimentoLista++;

			if (comprimentoLista == 1 || percorreLista->ID == ID)
			{
				percorreLista = nullptr;
			}
			else
			{

			}
			
		}
	}
	return 0;
}

int ListaItens::contarItens()
{
	if (inicioLista == nullptr)
	{
		return 0;
	}
	else
	{
		Itens *percorreLista = inicioLista;
		if (percorreLista != nullptr)
		{
			percorreLista = percorreLista->proxima;
			comprimentoLista++;
		}
	}
	return comprimentoLista;
}

Itens * ListaItens::buscarItemPorID(int ID)
{
	if (inicioLista == nullptr)
	{
		return 0;
	}
	else
	{
		Itens *percorreLista = inicioLista;
		if (percorreLista->ID != ID && percorreLista != nullptr)
		{
			percorreLista = percorreLista->proxima;

			if (percorreLista->ID == ID)
			{
				return percorreLista;
			}
		}
	}

	return nullptr;
}
