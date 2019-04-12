#pragma once
#include<iostream>
#include<string>

using namespace std;
struct itens
{
	string tipo;
	int ID, peso;
};
class Inventario
{
public:
	Inventario();
	~Inventario();
	void inserir(int ID, string tipoItem, int peso);
	void remover(int ID);
	void consulta();
	string consulta(int ID);
	void defineMaxPeso(int maxPeso);
	void defineMaxItens(int maxItens);

	itens * item[50];

private:
	int qtdPeso = 0, MaxPeso, MaxItens = 0, qtdItens;
	

};

