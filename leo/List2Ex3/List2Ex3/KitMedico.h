#pragma once
#include <string>

using namespace std;

class KitMedico
{
public:
	KitMedico();
	~KitMedico();
	string medicar();
	bool getKitMed();
	void setKitMed(bool kitMed) { tem = kitMed; };
	int getQtdKitMed(int qtdKitMed) { qtdKitMed += this->qtdKitMed; return this->qtdKitMed; };

private:
	bool tem = false;
	int qtdKitMed = 0;
};

