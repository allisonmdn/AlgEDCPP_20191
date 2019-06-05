#include<iostream>
#include<queue>

int main()
{
	int n, placa, placaExcluir;
	char tecla;
	bool achou = false;

	struct Carros
	{
		int placas;
	};

	std::queue <Carros> filaCarros;

	std::cout << "Qtd carros" << std::endl;
	std::cin >> n;

	Carros *carros = new Carros[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "Digite a placa: " << std::endl;
		std::cin >> placa;
		std::cin.ignore();
		carros[i].placas = placa;
		filaCarros.push(carros[i]);
	}

	std::cout << "Digite a placa do carro que quer excluir" << std::endl;
	std::cin >> placaExcluir;
	
	while(achou == false)
	{
		if (placaExcluir == filaCarros.front().placas)
		{
			achou = true;
		}

		if (achou == true)
		{
			filaCarros.pop();
			std::cout << "Carro Excluido" << std::endl;
		}
		else
		{
			Carros *carro = &filaCarros.front();
			filaCarros.pop();
			filaCarros.push(*carro);
			std::cout << "Carro voltou pro fim" << std::endl;
		}
	}
		
	std::cout << "Digite s para ver o estado do estacionamento" << std::endl;
	std::cin >> tecla;

	if (tecla == 's')
	{
		std::cout << filaCarros.size() << std::endl;
	}

	/*for (int i = 0; i < filaCarros.size(); i++)
	{
		//std::cout << filaCarros.placas << std::endl;
	}*/

	system("pause");
	return 0;
}