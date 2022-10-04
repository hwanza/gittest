#include<iostream>
using namespace std;
int main() {
	double price, sum;
	int tc;
	cin >> tc;
	for(int i = 0; i < tc; i++) {
		cin >> price;
		sum = price * 0.2;
		cout << fixed;
		cout.precision(2);
		cout << "$" << price - sum << '\n';
	}
}