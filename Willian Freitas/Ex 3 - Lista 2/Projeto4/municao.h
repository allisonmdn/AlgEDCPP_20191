#pragma once
class municao
{
public:
	municao();
	~municao();

	int getQtdBalas() { return qtdBalas; }
	void setQtdBalas(int balas) { qtdBalas = balas; }
	void recarregarPente(int bal) { qtdBalas += bal; }

protected:
	int qtdBalas;
};

