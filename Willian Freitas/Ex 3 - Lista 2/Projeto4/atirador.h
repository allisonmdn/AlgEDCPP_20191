#pragma once
#include "arma.h"
#include "pistola.h"
#include "municao.h"
#include "carabina.h"
#include "rifle.h"
#include "municaoRifle.h"
#include "municaoPistola.h"
#include "municaoCarabina.h"
#include "armadura.h"
#include "kitMedico.h"
#include <string>

using namespace std;

class atirador
{
public:
	atirador(int i);
	~atirador();
	string trocarDeArma(int i);
	void atirar();
	void recarregarArma();
	string tomarDano(int dano);
	void usarArmadura();
	void usarKitMed();

protected:
	kitMedico kit;
	armadura armadura;
	int qtdArmadura = 0;
	municao *municao[3]{ new municaoPistola, new municaoCarabina, new municaoRifle };
	int armaAtiva = 0, hp;
	arma *arma[3]{new pistola, new carabina, new rifle};
};

