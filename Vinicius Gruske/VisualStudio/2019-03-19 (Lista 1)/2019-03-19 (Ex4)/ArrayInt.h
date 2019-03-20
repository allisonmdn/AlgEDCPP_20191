#pragma once
#include <iostream>

class ArrayInt
{
public:
	ArrayInt(int tam);
	~ArrayInt();

	//1
	void adiciona(int val);
	//2
	void remover();
	//3
	void adicionaEm(int val, int pos);
	//4
	void removerEm(int pos);
	//5
	void realocar();
	//6
	int obterValorEm(int i);
	//7
	int obterValor();
	//8
	int mostrarValores();	

private:
	int *arrayInt, tamanho;
};

