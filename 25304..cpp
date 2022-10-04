#include<iostream>
using namespace std;
int main() {
	int N, tc, A, B, sum = 0;
	cin >> N;
	cin >> tc;
	while(tc--) {
		cin >> A >> B;
		sum = sum + (A * B);
	}
	if(N == sum) {
		cout << "Yes";
	}
	else cout << "No";
}