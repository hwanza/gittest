#include<iostream>
using namespace std;
int main() {
	int array[100] = { 0 }, sum = 0;
	for(int i = 0; i < 100; i++) {
		cin >> array[i];
		sum+=array[i];
	}
	cout << sum;
}