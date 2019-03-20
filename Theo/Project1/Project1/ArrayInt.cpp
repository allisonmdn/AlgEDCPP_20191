#include "ArrayInt.h"
#include<iostream>

using namespace std;


ArrayInt::ArrayInt()
{
}


ArrayInt::~ArrayInt()
{
}

int ArrayInt::tamanhoM(int tamanho)
{	
	this->tamanho = tamanho;

	vet = new int[tamanho];

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
	int *vetAux = new int[tamanho];
	for (int i = 0; i < tamanho; i++)
	{
		vetAux[i] = vet[i];
	}
	
	delete[]vet;

	this->vet = new int[tamanho + 5];

	for (int i = 0; i < tamanho; i++)
	{
		this->vet[i] = vetAux[i];
	}

	cout << endl;

	for (int i = tamanho; i < tamanho + 5; i++)
	{
		cout << "Digite numeros para preencher o vetor realocado ";
		cin >> num;
		vet[i] = num;
	}
	
	delete[]vetAux;

	tamanho += 5;

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

		cout << "Numeros do vetor: ";
		for (int i = 0; i < tamanho; i++)
		{
			cout << vet[i] << " ";
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
