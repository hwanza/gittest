#include<iostream>
using namespace std;
int main() {
	int N;
	cin >> N;
	if(N % 2) {
		cout << "Either";
	}
	else {
		if(N * (N + 1) / 2 % 2) {
			cout << "Odd";
		}
		else {
			cout << "Even";
		}
	}
}