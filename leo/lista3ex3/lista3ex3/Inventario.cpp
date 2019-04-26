#include "Inventario.h"


Inventario::Inventario()
{

}


Inventario::~Inventario()
{
}

void Inventario::inserirItem(int id, string nome, string tipo, int peso)
{
	items * i = new items;

		i->id = id;
		i->nome = nome;
		i->peso = peso;
		i->tipo = tipo;
		
	if (this->peso < maxPeso && qtdItens < maxItens) {
		item[id] = i;

		i->id = id;
		i->nome = nome;
		i->peso = peso;
		i->tipo = tipo;
		this->peso += peso;
		qtdItens++;
	}

}

void Inventario::removerItem(int id)
{
	this->peso -= item[id]->peso;
	for (int i = id; i < qtdItens; i++)
	{
		item[i] = item[i + 1];
	}
	qtdItens--;
}

void Inventario::consultarListaItens()
{
	for (int i = 0; i < qtdItens; i++) {
		this->consultarItem(i);
	}
	cout << "Peso: " << peso << "/" << maxPeso << endl << endl;
}

void Inventario::consultarItem(int id)
{
	cout << "ID: " << item[id]->id;
	cout << " - Nome: " << item[id]->nome;
	cout << " - Tipo: " << item[id]->tipo;
	cout << " - Peso: " << item[id]->peso << endl << endl;
}

void Inventario::maxPesoDefinir(int peso)
{
	this->maxPeso = peso;
}
