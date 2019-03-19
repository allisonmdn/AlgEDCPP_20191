#pragma once
#include<iostream>
class ArrayInt
{
public:
	ArrayInt(int tam);
	~ArrayInt();

	void realocar();
	int tamanho() { return tamanho; };
	void adicionar(int val);
	void adicionarEm(int val, int pos);
	void remover();
	void removerEm(int pos);
	int obterValorEm(int i) { return array[i]; };
	int obterValor();
	int mostrarValores();

private:
	int *array, indice, tamanho;
};

