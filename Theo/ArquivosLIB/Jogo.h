#pragma once
#include "libUnicornio.h"
#include<fstream>

using namespace std;

class Jogo
{
public:
	Jogo();
	~Jogo();

	void inicializar();
	void finalizar();

	void executar();
	void carregadorDeAssets();

private:
	int qtdAssets, animacoes, frames, tamanhoFonte;
	string token, nome, path;
	Sprite sprite;
};

