#include "ArrayInt.h"

ArrayInt::ArrayInt(){
	vetor = new int[5];
}

ArrayInt::~ArrayInt(){

}

void ArrayInt::realocar(){
	//declara um vetor auxiliar
	int *vetorAux = new int[tamanhoVetor];
	for (int i = 0; i < this->tamanhoVetor; i++) {
		vetor[i] = vetorAux[i];
	}
	this->tamanhoVetor += 5;
	delete[]vetor;

	vetor = new int[this->tamanhoVetor];

	for (int i = 0; i < this->tamanhoVetor - 5; i++) {
		vetor[i] = vetorAux[i];
	}
}

int ArrayInt::tamanho(){
	return 0;
}

void ArrayInt::adicionar(int valor){
}

void ArrayInt::adicionarEm(int valor, int posicao){
}

void ArrayInt::remover(){
}

void ArrayInt::remover(int posicao){
}

int ArrayInt::obterValorEm(int i){
	return 0;
}

int ArrayInt::obterValor(){
	return 0;
}

int ArrayInt::mostrarValores(){
	return 0;
}
