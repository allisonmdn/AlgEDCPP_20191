#include <iostream>

#include <queue>
#include <string>
int main()
{
	std::queue<std::string> estacionamento;
	std::string fila_final; //Condi��o de volta completa.
	std::string aux; //Vari�vel auxiliar para conter valor.
	std::string placa;

	int c = 0;

	setlocale(LC_ALL, "Portuguese");

	estacionamento.push("CARRO492");
	estacionamento.push("CARRO493");
	estacionamento.push("CARRO494");
		

	
	std::cout << "Qual a placa do carro voc� deseja?\n";
	std::getline(std::cin, placa);

	fila_final = estacionamento.front();


	do{
		
			estacionamento.front();

			if (estacionamento.front() == placa)
			{
				std::cout << "Placa: " << placa << " encontrada. ";
				std::cout << "Removendo seu carro\n";
				estacionamento.pop();

				break;
			}
			else
			{	


				aux = estacionamento.front(); //Vari�vel auxiliar.							
				estacionamento.pop();//Removendo valor antigo do primeiro.
				estacionamento.push(estacionamento.front());//Trazendo o antigo segundo para o novo primeiro.
				estacionamento.back() = aux;
				

				if (estacionamento.front() == fila_final)
				{
					std::cout << "Placa: " << placa << " n�o encontrada\n";					
				}				
								
			}
		
	 } while (estacionamento.front() != fila_final);

	system("pause");

	return 0;
}