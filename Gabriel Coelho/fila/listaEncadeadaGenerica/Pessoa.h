#pragma once
#include <string>
class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	std::string s_nome;
	int i_idade;
	bool operator==(Pessoa p);
	bool operator<(Pessoa p);
};

