#include<iostream>
using namespace std;
int main() {
	int array[6] = { 500, 100, 50, 10, 5 , 1 }, n, cnt = 0, remain;
	cin >> n;
	remain = 1000 - n;
	for(int i = 0; i < 6; i++) {
		while(remain >= array[i]) {
			remain -= array[i];
			cnt++;
		}
	}
	cout << cnt << '\n';
}