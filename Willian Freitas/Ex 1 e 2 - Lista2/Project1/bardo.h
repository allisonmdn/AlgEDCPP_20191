#pragma once
#include "feiticeiros.h"
class bardo :
	public feiticeiros
{
public:
	bardo();
	~bardo();

	string tocarMusica() { return "tocando musica"; }
};

