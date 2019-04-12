#include<iostream>
#include<string>
#include "Inventario.h"

using namespace std;

int main()
{
	Inventario inventario;

	inventario.defineMaxItens(1);
	inventario.defineMaxPeso(10);
	inventario.inserir(0, "Armadura", 6);
	inventario.consulta(0);

	system("pause");
	return 0;
}