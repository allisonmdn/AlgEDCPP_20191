#include <iostream>

void main() {
	/*std::cout.put('F').put('\n');
	char buffer[10];
	std::cin.get(buffer, 10);
	for (int i = 0; i < 10; i++) {
		std::cout.put(buffer[i]).put('\n');
	}*/

	char buffer[] = "Saida ";
	std::cout.write(buffer, 10);
	std::cin.read(buffer, 6);
	std::cout << std::cin.gcount() << 
		std::endl;
	std::cout.write(buffer, std::cin.gcount());
	
	system("pause");
}