#include <iostream>
#include <deque> 
#include <algorithm>
using namespace std;

void printKMax(int arr[], int n, int k) {
	//Write your code here.
	deque<int> mydeque;
	if (k <= n && k >= 1 && n >= 1 && n <= 10000) {
		mydeque.assign(arr, arr + n);
		if (k == 1)
			cout << *max_element(mydeque.begin(), mydeque.begin() + k) << " ";
		else
			for (int i = 0; i <= (n - k); i++) {
				cout << *max_element(mydeque.begin() + i, mydeque.begin() + i + k) << " ";
			}
	}
}

int main() {

	int t, r;
	cin >> t;
	if (t >= 1 && t <= 1000) {
		while (t > 0) {
			int n, k;
			cin >> n >> k;
			int i;
			int arr[n];
			for (i = 0; i < n; i++) {
				cin >> r;
				if (r >= 1 && r <= 10000) arr[i] = r;
			}
			printKMax(arr, n, k);
			cout << endl;
			t--;
		}
	}
	return 0;
}