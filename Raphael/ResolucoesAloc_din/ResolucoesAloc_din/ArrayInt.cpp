#include "ArrayInt.h"



ArrayInt::ArrayInt()
{
	vetor = new int[5];
}


ArrayInt::~ArrayInt()
{
}

void ArrayInt::realocar()
{
	//declara um vetor auxiliar
	int* vet_aux = new int[tamanho_vetor];
	
	for (int i = 0; i < this->tamanho_vetor; i++)
		vetor[i] = vet_aux[i];
	this->tamanho_vetor += 5;
	delete[] vetor;
	
	vetor = new int[this->tamanho_vetor];

	for (int i = 0; i < (this->tamanho_vetor - 5); i++)
		vetor[i] = vet_aux[i];


}
