#pragma once
#include <fstream>
#include <iostream>
#include "libUnicornio.h"
using namespace std;
class CarregadorDeAssets{

public:
	CarregadorDeAssets();
	~CarregadorDeAssets();

	bool carregarRecursos(fstream & f_arq_recursos);

private:
	int i_num_assets;
};

