#include<iostream>
using namespace std;
int main() {
	int n, array[100001] = { 0 }, cnt = 0;
	while(1) {
		cin >> n;
		if(n == -1) {
			break;
		}
		for(int i = 0; i < n; i++) {
			if(n % i == 0) {
				array[i]+=i;
				cnt++;
			}
		}
		cout << cnt;
	}
}