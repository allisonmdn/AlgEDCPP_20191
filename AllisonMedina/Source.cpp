#include "Atirador.h"
#include <conio.h>

void main()
{
	Atirador * atirador = new Atirador;

	do
	{
		atirador->armaEscolhida();

		std::cout << "\n[1] Atirar " << " [2] Recarregar Arma " << " [q] Mudar Arma " << " [3]Usar Armadura " << " [e] Usar Kit Medico\n\n";
		std::cout << "[s]Sair\n\n";
		
		std::cout << "\n---ATUALIZAR ACOES--\n";
		std::cout << "\n-----------------------\n";
		if (_getch() == '1')
		{
			atirador->atirar();
		}
		else if (_getch() == '2')
		{
			atirador->recarregarArma();
		}
		else if (_getch() == 'q')
		{
			atirador->mudarArma();
		}
		else if (_getch() == 'e')
		{
			atirador->usarKitMedico();
		}
		else if (_getch() == '3')
		{
			atirador->usarArmadura();
		}
		std::cout << "\n-----------------------\n";
		
		

	} while (_getch() != 's');
	
}