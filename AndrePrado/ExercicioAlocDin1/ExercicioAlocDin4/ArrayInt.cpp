#include "ArrayInt.h"

ArrayInt::ArrayInt(int tam)
{
	array = new int[tam];
	tamanho = tam;
	indice = 0;
}

ArrayInt::~ArrayInt()
{
}

void ArrayInt::adicionar(int val)
{
	if (indice < tamanho) {
		array[indice] = val;
		indice++;
	}
	else {
		array = (int*)realloc(tamanho,5*sizeof(int));
		array[indice] = val;
		indice++;
	}
}

int ArrayInt::mostrarValores()
{
	for (int i = 0; i < tamanho; i++)
	{
		return array[i];
	}
	return 0;
}
