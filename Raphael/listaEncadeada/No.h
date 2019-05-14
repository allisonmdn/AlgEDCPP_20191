#pragma once
#include "Pessoa.h"

class No
{
public:
	No();
	~No();
	Pessoa * info; //informação que será armazenada
	No * proximo; //ponteiro para o próximo nó
	
};
