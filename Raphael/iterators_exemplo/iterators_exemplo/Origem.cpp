// list::begin
#include <iostream>
#include <list>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;
void myfunction(int i) {  // function:
	std::cout << ' ' << i;
}

struct myclass {           // function object type:
	void operator() (int i) { std::cout << ' ' << i; }
} myobject;
int main()
{
	int myints[] = { 75,23,65,42,13 };
	std::list<int> mylist(myints, myints + 5);

	std::cout << "mylist contains:";
	for (std::list<int>::iterator it = mylist.begin(); it != mylist.end(); ++it)
		std::cout << ' ' << *it;

	std::cout << '\n';


	// declaração da vector de int
	vector<int> vec;
	int i;

	// display the original size of vec
	cout << "vector size = " << vec.size() << endl;

	// push 5 values into the vector
	for (i = 0; i < 5; i++) {
		vec.push_back(i);
	}

	// display extended size of vec
	cout << "extended vector size = " << vec.size() << endl;

	// access 5 values from the vector
	for (i = 0; i < 5; i++) {
		cout << "value of vec [" << i << "] = " << vec[i] << endl;
	}

	// use iterator to access the values
	vector<int>::iterator v = vec.begin();
	vector<int>::reverse_iterator rv = vec.rbegin();

	while (rv != vec.rend()) {
		cout << "value of v = " << *rv << endl;
		rv++;
	}

	std::deque<int> mydeque;

	for (int i = 1; i <= 5; i++) mydeque.insert(mydeque.end(), i);

	std::cout << "mydeque contains:";

	std::deque<int>::iterator it = mydeque.begin();

	while (it != mydeque.end())
		std::cout << ' ' << *it++;

	std::cout << '\n';
	
		std::vector<int> myvector;
		myvector.push_back(10);
		myvector.push_back(20);
		myvector.push_back(30);

		std::cout << "myvector contains:";
		for_each(myvector.begin(), myvector.end(), myfunction);
		std::cout << '\n';

		// or:
		std::cout << "myvector contains:";
		for_each(myvector.begin(), myvector.end(), myobject);
		std::cout << '\n';
	
	system("pause");
	return 0;
}