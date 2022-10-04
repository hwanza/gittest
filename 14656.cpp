#include<iostream>
using namespace std;
int main() {
	int n, st, cnt = 0;
	cin >> n;
	for(int i = 1; i <= n; i++) {
		cin >> st;
		if(i != st) {
			cnt++;
		}
	}
	cout << cnt;
}