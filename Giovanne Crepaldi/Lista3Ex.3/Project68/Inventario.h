#pragma once
#include "Item.h"
#include <vector>
class Inventario
{
public:
	Inventario();
	~Inventario();

	vector<Item>itens;

	Item criarItem(float peso, string id, string tipo);
	void removerItem();
	Item consultarItem(string id);

};

