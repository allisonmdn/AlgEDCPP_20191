#include "ArrayInt.h"
#include<iostream>

using namespace std;


ArrayInt::ArrayInt()
{
	vet = new int[tamanho];
}


ArrayInt::~ArrayInt()
{
}

int ArrayInt::tamanhoM(int tamanho)
{	
	this->tamanho = tamanho;

	return tamanho;
}

void ArrayInt::addValor(int valor)
{	
	if (tamanho > newTamanho)
	{
		tamanho += 1;
		vet[tamanho - 1] = valor;
	}
	if (newTamanho > tamanho)
	{
		newTamanho += 1;
		vet[newTamanho - 1] = valor;
	}
}

void ArrayInt::removerValor()
{	
	if (tamanho > newTamanho)
	tamanho -= 1;

	if (newTamanho > tamanho)
	newTamanho -= 1;
}

void ArrayInt::addValor(int valor, int pos)
{	
	vet[pos] = valor;
}

void ArrayInt::removerValor(int pos)
{		
	if (tamanho > newTamanho)
	{
		tamanho -= 1;
		for (int i = pos; i < tamanho; i++) {

			vet[i] = vet[pos + i];
		}
	}

	if (newTamanho > tamanho)
	{
		int j = 0;
		newTamanho -= 1;
		for (int i = pos; i < newTamanho; i++)
		{	
			j++;
			vet[i] = vet[pos + j];
		}
	}	
}

int ArrayInt::realocar()
{	
	newTamanho = tamanho + 5;

	for (int i = tamanho; i < newTamanho; i++)
	{
		cout << "Digite numeros para preencher o vetor realocado ";
		cin >> num;

		vet[i] = num;
	}
		

	return 0;
}

int ArrayInt::obterValor(int pos)
{	
	cout << endl << "Valor da posicao " << pos << ": " << vet[pos] << endl;

	return vet[pos];
}

int ArrayInt::obterValor()
{	
	if (tamanho > newTamanho) {

		cout << endl << "O ultimo valor do vetor e: " << vet[tamanho - 1] << endl;
	}
	if (newTamanho > tamanho)
	{
		cout << endl << "O ultimo valor do vetor e: " << vet[newTamanho - 1] << endl;
	}

	return 0;
}

int ArrayInt::mostrarValores()
{	
	if (newTamanho > tamanho) {

		cout << "Numeros do vetor realocado: ";
		for (int i = 0; i < newTamanho; i++)
		{
			cout << vet[i] << " ";
		}
	}
	
	if(tamanho > newTamanho)
	{
		cout << "Numeros do vetor: ";
		for (int i = 0; i < tamanho; i++)
		{
			cout << vet[i] << " ";
		}
	}
	return 0;
}

void ArrayInt::preencherVetor()
{	
	for (int i = 0; i < tamanho; i++) 
	{
		cout << "Digite numeros para preencher o vetor ";
		cin >> num;

		vet[i] = num;
	}
}
