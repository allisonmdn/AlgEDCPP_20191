#include <iostream>
#include <fstream>

void main() {
	int n,m,o;
	std::ofstream arquivo("arq.bin", std::ios::binary);
	if (!arquivo) {
		std::cout << "Erro ao abrir arquivo" << std::endl;
	}
	else {
		n = 10;
		m = 1;
		o = 2;
		arquivo.write(reinterpret_cast<const char*> (&n), sizeof(int));
		arquivo.write(reinterpret_cast<const char*> (&m), sizeof(int));
		arquivo.write(reinterpret_cast<const char*> (&o), sizeof(int));

		arquivo.close();
	}
	std::ifstream ler_arq;
	ler_arq.open("arq.bin", std::ios::in);
	if (ler_arq) {
		int i;
		do {
			ler_arq.read(reinterpret_cast<char*> (&i), sizeof(int));
			if (ler_arq.tellg() > 0) {
				std::cout << ler_arq.tellg() << std::endl;
				std::cout << i << std::endl;
			}
			
		} while (ler_arq && !ler_arq.eof());
		ler_arq.close();
	}
	system("pause");
}