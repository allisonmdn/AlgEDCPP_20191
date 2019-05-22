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
	listaInt.inserirEm(&i2, 0);
	listaInt.inserirEm(&i4, 1);
	listaInt.inserirEm(&i3, 1);
	listaInt.inserirEm(&i2, 1);

	for (int i = -1; i < 5; i++)
	{
		if (listaInt.obterEm(i) == NULL)
		{
			cout << "NULL" << endl;
		}
		else
		{
			cout << listaInt.obterEm(i) << "\t";
			cout << listaInt.obterPtrEm(i) << endl;
		}
	}

	if (listaInt.contemNaLista(&i2))
	{
		cout << "Contém na Lista" << endl;
	}
	else
	{
		cout << "Não contém na Lista" << endl;
	}


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