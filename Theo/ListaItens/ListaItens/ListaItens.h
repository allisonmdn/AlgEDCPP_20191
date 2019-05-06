#pragma once
#include"Itens.h"
class ListaItens
{
public:
	Itens *inicioLista;
	ListaItens();
	~ListaItens();
	int insereItem(Itens *item);
	int removeItem(int ID);
	int contarItens();
	Itens * buscarItemPorID(int ID);

	int comprimentoLista;
};

