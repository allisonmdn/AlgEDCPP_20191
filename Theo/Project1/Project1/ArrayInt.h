#pragma once
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();
	int tamanhoM(int tamanho);
	void addValor(int valor);
	void removerValor();
	void addValor(int valor, int pos);
	void removerValor(int pos);
	int realocar();
	int obterValor(int pos);
	int obterValor();
	int mostrarValores();
	void preencherVetor();



private:
	int *vet;
	int num;
	int tamanho, newTamanho;
};

