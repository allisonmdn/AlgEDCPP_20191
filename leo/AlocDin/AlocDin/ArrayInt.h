#include <iostream>
#pragma once

using namespace std;
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();
	
	void adicionar();
	void adicionarEm(int num, int pos);
	void remover();
	void removerEm();
	int obterValorEm(int i);
	int Valor();
	int mostrarValores();

private:
	void realocar();
	int tamanho(int tamanho);

	int *array;
	int indice;
	int tamanho;
};

