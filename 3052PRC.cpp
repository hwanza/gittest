#include<iostream>
using namespace std;
int main() {
	int array[10], cnt = 0;
	for(int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	for(int i = 0; i < 10; i++) {
		if(array[i] / 42 == 0) {
			cnt++;
		}
	}
	cout << cnt;
}