#include "ArrayInt.h"



ArrayInt::ArrayInt(int tam)
{
	array = new int[5];
	tamanho = tam;
	indice=0;
}


ArrayInt::~ArrayInt()
{
}

void ArrayInt::realocar()
{//declara vetor auxiliar
	int*arrayAux=new int[tamanho];

	for (int i = 0; i < this->tamanho; i++) 
		array[i] = arrayAux[i];
	this->tamanho += 5;
	delete[]array;

	array = new int[this->tamanho];

	for (int i = 0; i < (this->tamanho - 5); i++)
		array[i] = array[i];

}

int ArrayInt::tamanho(int tamanho)
{
	for (int i = tamanho; i < tamanho; i++) {
		cout << array[tamanho] << endl;
	}
	return 0;
}

void ArrayInt::adicionar()
{
	if (indice < tamanho){
		for (int i = tamanho; i < tamanho; i++) {
			array[tamanho]=num;
			tamanho++;
		}
	}
	
}

void ArrayInt::adicionarEm(int num, int pos)
{
}

void ArrayInt::remover()
{
	delete[] array;
}

void ArrayInt::removerEm()
{
	delete [] array;
}

int ArrayInt::obterValorEm(int i)
{
	array[i];
	return 0;
}

int ArrayInt::mostrarValores()
{
	for (int i = pos; i < pos; i++) {
		cout << array[pos];
	}
	return 0;
}
