#pragma once
#include "Origem.cpp"
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();

	int tamanho();
	void adicionar(int valor);
	void adicionarEm(int valor, int posicao);
	void remover();
	void remover(int posicao);
	int obterValorEm(int i);
	int obterValor();
	int mostrarValores();

private:

	void realocar();

	int *vetor, tamanhoVetor = 5, ocupado;
};

