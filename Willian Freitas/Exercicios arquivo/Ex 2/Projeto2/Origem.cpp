#include <iostream>
#include <string>
#include<fstream>

using namespace std;

int main()
{

	ifstream arq("texto.txt", std::ios::in);
	string palavra, substituto, texto, pal;
	cout << "palavra que quer substituir";
	cin >> palavra;

	cout << "palavra substituta";
	cin >> substituto;


	while (!arq.eof()) {
		arq >> pal;
		if (pal == palavra)
			pal = substituto;
		texto += pal;
		texto += " ";
	}

	texto += pal;

	cout << texto;

	system("pause");
	return 0;
}