#include "Atirador.h"



Atirador::Atirador()
{
}


Atirador::~Atirador()
{
}

void Atirador::disparar(Pistola nArma)
{
	if (nArma.getMunicao() > 0) {
		nArma.reduzirMunicao();
	}
}

void Atirador::recaregar(Pistola nArma)
{

}
