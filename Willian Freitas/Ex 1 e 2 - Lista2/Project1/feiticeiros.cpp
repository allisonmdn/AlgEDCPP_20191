#include "feiticeiros.h"



feiticeiros::feiticeiros()
{
}


feiticeiros::~feiticeiros()
{
}

string feiticeiros::conjurar(int conjuracao)
{
	if (conjuracao == 1)
		return "conj1";
	else if (conjuracao == 1)
		return "conj2";
	else if (conjuracao == 1)
		return "conj3";
}

string feiticeiros::soltarMagia(int magia)
{
	if (magia == 1)
	return "magia1";
	else if (magia == 1)
		return "magia2";
	else if (magia == 1)
		return "magia3";
}

string feiticeiros::enfeiticar(int feitico)
{
	if (feitico == 1)
		return "feitico1";
	else if (feitico == 1)
		return "feitico2";
	else if (feitico == 1)
		return "feitico3";
}
