#include "Inventario.h"



Inventario::Inventario()
{
	pos = 0;
	pesoAtual = 0;
}


Inventario::~Inventario()
{
}

void Inventario::setInventario(int  tamanho, int  pesoMax)
{
	arqEntrada.open("inventario.txt",std::ios::app);
	if (arqEntrada.is_open()) {

		arqEntrada >> tamanho;
		arqEntrada >> pesoMax;
		arqEntrada >> pesoAtual;

		pesoItem = new int[tamanho];
		tipo = new std::string[tamanho];
		nome = new std::string[tamanho];
		ID = new int[tamanho];

		pesoTotal = pesoMax;
		tamanhoMax = tamanho;

		arqEntrada.close();
	}
}

void Inventario::adicionarItem(std::string nItem, int  peso, std::string  tipoItem)
{
	if (pesoAtual < (peso + pesoTotal) && pos < tamanhoMax) {
		pesoItem[ID[pos]] = peso;
		pesoAtual += peso;
		pesoItem[ID[pos]] = peso;
		tipo[ID[pos]] = tipoItem;
		nome[ID[pos]] = nItem;

		pos++;
	}
}

void Inventario::removerItem(int posicao)
{
	if (posicao >= 0 && posicao < tamanhoMax) {
		pesoItem[ID[posicao]] = 0;
		tipo[ID[posicao]] = "";
		nome[ID[posicao]] = "";
	}
}

void Inventario::removerUltimoItem()
{
	if (pos >= 0) {
		pesoItem[ID[pos]] = 0;
		tipo[ID[pos]] = "";
		nome[ID[pos]] = "";
		ID--;
	}
}

std::string Inventario::consultarItem(int id)
{
	if (id >= 0 && id < tamanhoMax)
	{
		return std::string("nome " + nome[ID[id]] + " tipo " + tipo[ID[id]] + " peso " + std::to_string(pesoItem[ID[id]]));
	}
	return std::string("item nao existe!");
}

void Inventario::salvarInventario()
{
	if (arqEntrada.is_open()) {

		for (int i = 0; i < tamanhoMax; i++) {
			arqEntrada >> pesoAtual;
			arqEntrada >> ID[i] >> nome[ID[i]] >> tipo[ID[i]] >> pesoItem[ID[i]];
		}

		arqEntrada.close();
	}
}

void Inventario::carregar()
{
	arqSaida.open("inventario.txt");
	if (arqSaida.is_open()) {
		//carregar basico

		arqSaida << *iTokken;
		tamanhoMax = *iTokken;

		arqSaida << *iTokken;
		pesoTotal = *iTokken;

		arqSaida << *iTokken;
		pesoTotal = *iTokken;

		//carregar item

		for (int i = 0; i < tamanhoMax; i++) {
			arqSaida << *iTokken;
			ID[i] = *iTokken;

			arqSaida << *sTokken;
            nome[ID[i]] = *sTokken;

			arqSaida << *sTokken;
			tipo[ID[i]] = *sTokken;

			arqSaida << *iTokken;
			pesoItem[ID[i]] = *iTokken;
		}

		arqSaida.close();
	}
}
