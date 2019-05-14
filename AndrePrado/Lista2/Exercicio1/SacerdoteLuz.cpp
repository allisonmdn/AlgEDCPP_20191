#include "SacerdoteLuz.h"



SacerdoteLuz::SacerdoteLuz()
{
	mal = false;
}


SacerdoteLuz::~SacerdoteLuz()
{

}

void SacerdoteLuz::curar()
{
	qtdCura = rand() % 8 + 1;
}

void SacerdoteLuz::destruirMal()
{
	if(mal == true)
	mal = false;
}
