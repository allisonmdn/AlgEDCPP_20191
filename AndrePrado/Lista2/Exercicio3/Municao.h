#pragma once
class Municao
{
public:
	Municao();
	~Municao();

	void diminuiProjeteis();
	int getProjeteis() { return projeteis; }

protected:
	void setProjeteis(int proj);
	

private:
	int projeteis;
};

