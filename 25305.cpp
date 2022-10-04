#include<iostream>
using namespace std;
int main() {
	int n, cut, array[1001] = { 0 };
	cin >> n >> cut;
	for(int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for(int i = 0; i < n; i++) {
		for(int j = i + 1; j < n; j++) {
			if(array[i] < array[j]) {
				int temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	cout << array[cut - 1];
}