#include "Inventario.h"



Inventario::Inventario()
{
}


Inventario::~Inventario()
{
}

Item Inventario::criarItem(float peso, string id, string tipo)
{
	Item i;
	i.id = id;
	i.peso = peso;
	i.tipo = tipo;

	itens.push_back(i);

	return i;
}

void Inventario::removerItem()
{
	if (itens.size() == 0) {
	}
	else {
		itens.pop_back();
	}
}

Item Inventario::consultarItem(string id)
{
	if (itens.size() == 0) {
	}
	else {
		for (int i = itens.size() - 1; i >= 0; i--) {
			if (itens[i].id == id) {
				return itens[i];
			}
		}
	}
}
