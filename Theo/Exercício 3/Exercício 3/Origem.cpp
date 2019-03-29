#include"Arma.h"
#include"Municao.h"
#include"Pistola.h"
#include"Atirador.h"
#include<iostream>

using namespace std;

int main() 
{	
	Atirador *marquinhos = new Atirador;
	
	marquinhos->trocarArma(0);
	marquinhos->recarregarArma();

	for (int i = 0; i < 8; i++)
	{
		cout << marquinhos->getArma()->atirar() << endl;
		cout << marquinhos->usarArmadura() << endl;
		cout << marquinhos->usarKitMedico() << endl;
		cout << endl;
	}
	
	system("pause");
	return 0;
}