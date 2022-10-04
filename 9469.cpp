#include<iostream>
using namespace std;
int main() {
	int tc, N;
	double D, A, B, F, duration, average;
	cin >> tc;
	for(int i = 1; i <= tc; i++) {
		cin >> N >> D >> A >> B >> F;
		duration = D / (A + B);
		average = duration * F;
		cout << fixed;
		cout.precision(6);
		cout << N << ' ' << average << '\n';
	}
}