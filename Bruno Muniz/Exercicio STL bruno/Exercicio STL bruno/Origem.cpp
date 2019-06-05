#include<iostream>
#include<string>
#include<list>
#include"Carro.h"
#include<queue>
using namespace std;

int main()
{ 
	int nPlaca;
	queue<Carro> filaCarro;
	//list<Carro> listaCarro;

	Carro carro[4];
	carro[0].marca = "Fiat";
	carro[0].placa = 001;	
	//Carro * carro2 = new Carro;
	carro[1].marca = "Toyota";
	carro[1].placa = 002;
	//listaCarro.push_front(*carro2);
	//Carro * carro3 = new Carro;
	carro[2].marca = "Ford";
	carro[2].placa = 003;
	//listaCarro.push_front(*carro3);
	//Carro * carro4 = new Carro;
	carro[3].marca = "Honda";
	carro[3].placa = 004;
	//listaCarro.push_front(*carro4);
	//Carro * carro5 = new Carro;
	carro[4].marca = "Kia";
	carro[4].placa = 005;
	
	filaCarro.push(carro[0]);
	filaCarro.push(carro[1]);
	filaCarro.push(carro[2]);
	filaCarro.push(carro[3]);
	filaCarro.push(carro[4]);
	
	



	cout << "Informe a placa para a busca: ";
	cin >> nPlaca;
	for (int i = 0; i < 5; i++) {
		if (carro[i].placa == nPlaca) {
			cout << carro[i].placa;
		}
	}


	system("pause");
	return 0;
}