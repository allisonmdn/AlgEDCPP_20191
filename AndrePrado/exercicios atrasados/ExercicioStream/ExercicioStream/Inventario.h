#pragma once
#include<iostream>
#include<fstream>
#include<string>

class Inventario
{
public:
	Inventario();
	~Inventario();

	void setInventario(int tamanho, int pesoMax);
	void adicionarItem(std::string nItem, int peso, std::string tipoItem);
	void removerItem(int posicao);
	void removerUltimoItem();

	std::string consultarItem(int id);

	void salvarInventario();
	void carregar();

private:
	int pos, pesoAtual, pesoTotal, *ID, *pesoItem, tamanhoMax, *iTokken;
	std::string *tipo, *nome, *sTokken;
	std::ifstream arqEntrada;
	std::ofstream arqSaida;
};

