#pragma once
class Armadura
{
public:
	Armadura();
	~Armadura();
	bool getArmadura();
	void setArmadura(bool arm) { temArmadura = arm; };
	int getQuantidade();
	void setQuantidade(int qtd) { quantidade += qtd; };

private:
	bool temArmadura = false;
	int quantidade = 5;
};

