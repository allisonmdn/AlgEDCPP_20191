#pragma once
#include <string>

class Guerreiro
{
public:
	int force=0;
	int dexterity=0;
	int magic=0;
	int mana=0;
	int life=0;

	std::string acao;
	
	//prototipando funcao
	Guerreiro(int tp);


	Guerreiro();

	~Guerreiro();

private:

};

