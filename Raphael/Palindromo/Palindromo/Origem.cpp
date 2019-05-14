#include <iostream>
#include <string>

bool palindromo(std::string palavra, int tam, int indice) {
	bool result = true;
	if (tam > 0) {
		if ((palavra[indice] == palavra[(tam - 1)]))
			result = palindromo(palavra, --tam, ++indice);
		else
			result = false;
	}
	return result;
}
void main() {

	std::string palavra = "osto";
	palindromo(palavra, palavra.length(), 0) ? std::cout << "� pal�ndromo" << std::endl : 
		std::cout << "n�o � pal�ndromo" << std::endl;
	system("pause");
}