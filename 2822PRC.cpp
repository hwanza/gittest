#include<iostream>
#include<string>
using namespace std;
int main() {
	int array[8], sum = 0;
	for(int i = 0; i < 8; i++) {
		cin >> array[i];
	}
	for(int i = 0; i < 8; i++) {
		for(int j = i + 1; i < 8; j++) {
			if(array[i] > array[j]) {
				int temp;
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	sum = array[3] + array[4] + array[5] + array[6] + array[7];
	cout << sum << '\n' << array[3] << ' ' << array[4] << ' ' << array[5] << ' ' << array[6] << ' ' << array[6] << ' ';
}
