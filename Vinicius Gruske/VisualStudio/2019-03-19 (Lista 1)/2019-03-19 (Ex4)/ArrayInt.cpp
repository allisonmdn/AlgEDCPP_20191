#include "ArrayInt.h"
using namespace std;

ArrayInt::ArrayInt(int tam)
{
	tamanho = tam;
	arrayInt = new int[tamanho];
}

ArrayInt::~ArrayInt()
{
}

void ArrayInt::adiciona(int val)
{
	arrayInt = (int*)realloc(arrayInt, (tamanho++) * sizeof(int));
	arrayInt[tamanho--] = val;
}

void ArrayInt::remover()
{
	arrayInt = (int*)realloc(arrayInt, (tamanho--) * sizeof(int));
}

void ArrayInt::adicionaEm(int val, int pos)
{
	if (tamanho < pos && pos >= 0)
	{
		arrayInt[pos] = val;
	} 
	else
	{
		cout << "Posição inválida.";
	}
}

void ArrayInt::removerEm(int pos)
{
	if (tamanho < pos && pos >= 0)
	{
		arrayInt[pos] = 0;
	}
	else
	{
		cout << "Posição inválida.";
	}
}

int ArrayInt::obterValorEm(int i)
{
	return arrayInt[i];
}

int ArrayInt::obterValor()
{
	return arrayInt[tamanho--];
}