#include <iostream>
#include <string>


void inverter(std::string s, int n)
{
	

	if (s[s.length() - n] == s[n - 1])
	{
		
	  std::cout << "� pal�ndromo!\n";
				
		n--;
	}
	else
	{
		std::cout << "N�o � pal�ndromo!\n";
	}
	
	if (s.length() - n == n)
	{
		return inverter(s, n);
	}
	
	   

}


void main()
{
	setlocale(LC_ALL, "Portuguese");
	std::string st("arara");

	int n = st.length();

	inverter(st, n);


	system("pause");

}