#include<iostream>
#include<string>
using namespace std;
int main() {
	int tc, cnt = 0, sum = 0;
	string N;
	cin >> tc;
	for(int i = 0; i < tc; i++) {
		cin >> N;
		for(int i = 0; i < N.length(); i++) {
			if(N[i] == 'O') {
				cnt++;
			}
			else cnt = 0;
			sum+=cnt;
		}
		cout << sum << '\n';
		sum = 0, cnt = 0;
	}
}