#include <iostream>
#include <queue>


using namespace std;

void main() {

	struct car { int placa; };

	car car1, car2, car3;
	 car1.placa = 1;
	 car2.placa = 2;
	 car3.placa = 3;

	queue <car> cars;

	cars.push(car1);
	cars.push(car2);
	cars.push(car3);

	int placa;
	bool loop = true;
	char S;
	while (loop) {
		cout << "placa do carro: ";
		cin >> placa;
		bool achou = false;
		for (int i = 0; i < cars.size() && achou == false; i++) {
			if (cars.front().placa == placa) {
				cout << "carro retirado: " << cars.front().placa << endl;
				cars.pop();
				achou = true;
			}
			else {
				car *carAux = &cars.front();
				cars.pop();
				cars.push(*carAux);
			}
		}
		cout << "Continuar - C -- Ver Status - S -- Sair - X";
			cin >> S;
		if(S == 's')
		cout << "Qtd de carros: " << cars.size();
		else if (S == 'x'){
			loop = false;
		}
	}



	system("pause");
}