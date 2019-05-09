#include <iostream>
#include <string>


void inverter(std::string s, int n)
{
	char l;	 //Auxiliar.

	if (s[s.length() - n] != s[n - 1])
	{
		l = s[s.length() - n];
		s[s.length() - n] = s[n - 1];
		s[n - 1] = l;	
		
		n--;
	   	  				
	}
	
	return inverter(s, n);
	
		

}


void main()
{
	std::string st("Motoserra");

	int n = st.length();

	inverter(st, n);
	

	system("pause");

}