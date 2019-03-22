#pragma once
class ArrayInt
{
public:
	ArrayInt(int tamanho);
	~ArrayInt();
	void apagarUltValor();
	void adicionarUltValor(int valor);
	void adicionarValor(int posicao, int valor);
	void removerValor(int posicao);
	int obterValor(int posicao);
	int obterUltValor();
	void mostrarValores();

private:
	bool final;
	int tamanho;
	int *array = new int[tamanho];
};

