#include<iostream>
using namespace std;
int main() {
	int A, B, C;
	while(1) {
		cin >> A >> B >> C;
		if(A == 0 && B == 0 && C == 0) {
			break;
		}
		if(B - A == C - B) {
			cout << "AP" << ' ' << ((B - A) + C) << '\n';
		}
		else {
			cout << "GP" << ' ' << ((B / A) * C) << '\n';
		}
	}
}