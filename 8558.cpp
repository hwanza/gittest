#include <ios>
#include<iostream>
using namespace std;
int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(0);
	int N, result = 1;
	cin >> N;
	for(int i = 2; i <= N; i++) {
		result *= i;
		result %= 10;
	}
	cout << result << '\n';
}