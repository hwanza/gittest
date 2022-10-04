#include<iostream>
using namespace std;
int main() {
	int A, B, C;
	cin >> A >> B >> C;
	if(A <= B) {
		cout << B << '\n';
	}
	else if(A >= C) {
		cout << C << '\n';
	}
	else {
		cout << A << '\n';
	}
}