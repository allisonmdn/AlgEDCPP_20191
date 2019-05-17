#include <iostream>
#include "Lista.h"

using namespace std;

void main()
{
	setlocale(LC_ALL, "ptb");

	Lista<int> listaInt;
	int i1 = 10, i2 = 20, i3 = 30, i4 = 40;

	if (listaInt.listaVazia())
	{
		cout << "A lista está vazia." << endl;
	}
	else
	{
		cout << "A lista não está vazia." << endl;
	}

	listaInt.inserirFimLista(&i3);
	listaInt.inserirFimLista(&i4);
	listaInt.inserirInicioLista(&i1);
	listaInt.inserirInicioLista(&i2);
	listaInt.esvaziarLista();
	listaInt.removerInicioLista();
	listaInt.removerInicioLista();
	listaInt.removerFimLista();
	listaInt.removerFimLista();
	listaInt.removerFimLista();
	listaInt.removerFimLista();
	listaInt.removerFimLista();
	listaInt.inserirEm(&i1, 0);
	listaInt.inserirEm(&i1, 1);
	listaInt.inserirEm(&i1, 1);

	if (listaInt.listaVazia())
	{
		cout << "A lista está vazia." << endl;
	}
	else
	{
		cout << "A lista não está vazia." << endl;
	}

	cout << "Tamanho da lista: " << listaInt.tamanhoLista() << endl;

	system("pause");
}