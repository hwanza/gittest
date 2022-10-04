#include<iostream>
using namespace std;
int main() {
	int tc, array[100];
	cin >> tc;
	for(int i = 0; i < tc; i++) {
		cin >> array[i];
		for(int j = 0; j < array[i]; j++) {
			cout << "=";
		}
		cout << '\n';
	}
}