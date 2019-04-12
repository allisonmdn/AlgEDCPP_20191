#include "Inventario.h"



Inventario::Inventario()
{

}


Inventario::~Inventario()
{
}

void Inventario::inserir(int ID, string tipoItem, int peso)
{
	itens * item = new itens;
	
	if (qtdItens < MaxItens || qtdPeso < MaxPeso)
	{
		item->ID = ID;
		item->tipo = tipoItem;
		item->peso = peso;
		this->item[item->ID] = item;
		qtdItens++;
		qtdPeso += peso;
	}
}

void Inventario::remover(int ID)
{
	delete item[ID];

	item[ID] = nullptr;
}

void Inventario::consulta()
{
	for (int i = 0; i < qtdItens; i++)
	{
		cout << item[i]->tipo;
	}
}

string Inventario::consulta(int ID)
{
	cout << item[ID]->tipo;
	return item[ID]->tipo;
	
}

void Inventario::defineMaxPeso(int maxPeso)
{
	this->MaxPeso = maxPeso;
}

void Inventario::defineMaxItens(int maxItens)
{
	this->MaxItens = maxItens;
}


