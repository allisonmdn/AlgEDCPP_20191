#pragma once
#include <string>
class Pessoa
{
public:
	Pessoa();
	~Pessoa();
	std::string s_nome;
	int i_idade;

	void setNome(std::string nome) { s_nome = nome; }
	bool operator==(Pessoa p);
	bool operator<(Pessoa p);
};

