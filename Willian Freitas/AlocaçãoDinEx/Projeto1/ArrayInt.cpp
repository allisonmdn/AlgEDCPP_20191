#include "ArrayInt.h"
#include <iostream>
using namespace std;

ArrayInt::ArrayInt(int tamanho)
{
	this->tamanho = tamanho;
	for (int i = 0; i < tamanho; i++)
		array[i] = 0;
}


ArrayInt::~ArrayInt()
{
}

void ArrayInt::apagarUltValor()
{
	array[tamanho-1] = 0;
}

void ArrayInt::adicionarUltValor(int valor)
{
	array[tamanho - 1] = valor;
}

void ArrayInt::adicionarValor(int posicao, int valor)
{
	array[posicao] = valor;

	final = true;
	for (int i = 0; i < tamanho; i++)
		if (array[i] == 0) {
			final = false;
		}

	if (final == true) {
		int *arrayaux = new int[tamanho];
		for (int i = 0; i < tamanho; i++) {
			arrayaux[i] = array[i];
		}

		delete[]array;

		int *array = new int[tamanho+5];

		for (int i = 0; i < tamanho+5; i++) {
			array[i] = arrayaux[i];
		}

		delete[]arrayaux;

		tamanho += 5;
	}

}

void ArrayInt::removerValor(int posicao)
{
	array[posicao] = 0;
}

int ArrayInt::obterValor(int posicao)
{
	return array[posicao];
}

int ArrayInt::obterUltValor()
{
	return array[tamanho-1];
}

void ArrayInt::mostrarValores()
{
	for (int i = 0; i < tamanho; i++)
		cout << array[i];
}
