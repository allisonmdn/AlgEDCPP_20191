#pragma once
#include "Pessoa.h"

class No
{
public:
	No();
	~No();
	Pessoa * info; //informa��o que ser� armazenada
	No * proximo; //ponteiro para o pr�ximo n�
	
};
