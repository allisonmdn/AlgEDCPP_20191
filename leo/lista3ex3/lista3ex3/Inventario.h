#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

struct items {
	string nome, tipo;
	int id, peso;
};

class Inventario
{
public:
	Inventario();
	~Inventario();

	void inserirItem(int id, string nome, string tipo, int peso);
	void removerItem(int id);
	void consultarListaItens();
	void consultarItem(int id);
	void maxPesoDefinir(int peso);

	items *item[6];

private:
	int peso = 0, qtdItens = 0, maxPeso, maxItens = 6;

};

