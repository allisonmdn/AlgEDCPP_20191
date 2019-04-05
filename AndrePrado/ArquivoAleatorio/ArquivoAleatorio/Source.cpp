#include<iostream>
#include<fstream>

int main()
{
	int n, m, o, i;
	std::ofstream arquivo("arq.bin", std::ios::binary);
	std::ifstream lerArq;

	//Escrever no arquivo

	if (arquivo.is_open()){

		n = 10;
		m = 1;
		o = 2;
		arquivo.write(reinterpret_cast<const char*>(&n), sizeof(int));
		arquivo.write(reinterpret_cast<const char*>(&m), sizeof(int));
		arquivo.write(reinterpret_cast<const char*>(&o), sizeof(int));

		arquivo.close();
    }
	else {
		std::cout << "ERRO AO ABRIR O ARQUIVO!\N";
	}

	//Ler do arquivo

	lerArq.open("arq.bin", std::ios::in);

	if (lerArq.is_open()) {
		do {

			lerArq.read(reinterpret_cast<char*>(&i), sizeof(int));

			if (lerArq.tellg() > 0) {
				std::cout << i << std::endl;
				std::cout << lerArq.tellg() << std::endl;
			}

		} while (lerArq && !lerArq.eof());

		lerArq.close();
	}
	else {
		std::cout << "ERRO AO ABRIR O ARQUIVO!\N";
	}

	system("pause");
	return 0;
}