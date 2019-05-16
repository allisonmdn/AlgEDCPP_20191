#include "Pessoa.h"



Pessoa::Pessoa()
{
}


Pessoa::~Pessoa()
{
}

bool Pessoa::operator==(Pessoa p)
{
	return (this->i_idade == p.i_idade) && (this->s_nome == p.s_nome);
}

bool Pessoa::operator<(Pessoa p)
{
	return this->i_idade < p.i_idade;

}
