#include<iostream>
using namespace std;
int main() {
	int D, H, T, Miles, MPH;
	while(1) {
		cin >> D >> H >> T;
		if(H == 0) {
			break;
		}
		cout << "Trip #1: " << Miles << ' ' << MPH;
	}
}