#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int A, B;
	float M, res;
	cin >> A >> B;
	M = (B - A);
	M /= 400;
	res = 1 / (1 + pow(10, M));
	cout << res;
}