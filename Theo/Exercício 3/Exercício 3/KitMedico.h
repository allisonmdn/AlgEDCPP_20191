#pragma once
class KitMedico
{
public:
	KitMedico();
	~KitMedico();
	bool getKit();
	void setKit(bool kit) { temKit = kit; };
	int getQuantidade();
	void setQuantidade(int qtd) { quantidade += qtd; };

private:
	bool temKit = false;
	int quantidade = 5;
};

