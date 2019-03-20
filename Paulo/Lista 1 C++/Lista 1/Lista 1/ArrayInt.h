#pragma once
class ArrayInt
{
public:
	ArrayInt();
	~ArrayInt();
	void adicionarValorFinal();
	void removerValorFinal();
	void adicionarValorEspecifico();
	void removerValorEspecifico();
	void adicionarMaisPosicoes();
	void obterValorEspecifico();
	void obterUltimoValor();
	void mostrarValores();

private:
	int tamanho;
	bool final;
};

