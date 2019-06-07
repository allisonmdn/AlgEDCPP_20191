#include<vector>
#include<iostream>
#include<algorithm>

void myfunction(int i) // function:
{  
	std::cout << ' ' << i;
}

struct myclass // function object type:
{           
	void operator() (int i) { std::cout << ' ' << i; }

} myobject;


int main()
{
		std::vector<int> myvector; //Vetor de inteiros;
		myvector.push_back(10);
		myvector.push_back(20);
		myvector.push_back(30);

		//iterator opera com os algoritmos(biblio) da STL
		//iterator ->  se refere tanto ao objeto que percorre um container(coleção de elementos), quanto um padrão de projetos Iteraor
		//onde o iterador é usado para percorrer um container e acessar seus elementos.
		std::cout << "myvector contains:";
		for_each(myvector.begin(), myvector.end(), myfunction);
		std::cout << '\n';

		// or:
		/*std::cout << "myvector contains:";
		for_each(myvector.begin(), myvector.end(), myobject);
		std::cout << '\n';*/


	system("pause");
	return 0;
}