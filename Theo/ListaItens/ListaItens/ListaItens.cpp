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
		Itens *anteriorPercorreLista = inicioLista;
		if (percorreLista != nullptr)
		{
			while (percorreLista->proxima != nullptr)
			{
				//Caso primeiro elemento da lista
				if (percorreLista == inicioLista && percorreLista->ID == ID)
				{
					inicioLista = percorreLista->proxima;
					delete percorreLista;
					return 1;
				}
				//Caso último elemento ou elemento do meio
				else if(comprimentoLista > 1 && percorreLista->ID == ID)
				{
					anteriorPercorreLista->proxima = percorreLista->proxima;
					delete percorreLista;
					return 1;
				}
				//Caso não encontrar nenhum elemento
				else
				{
					anteriorPercorreLista = percorreLista;
					percorreLista = percorreLista->proxima;
					comprimentoLista++;

					return 0;
				}
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
		while (percorreLista != nullptr)
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
		while (percorreLista != nullptr)
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
