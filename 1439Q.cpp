#include<iostream>
#include<string>
using namespace std;
int main() {
	string N;
	int cnt = 0;
	cin >> N;
	for(int i = 0; i < N.size(); i++) {
		if(i == 0 > i == 1) {
			int temp;
			temp = 0;
			while(1) {
				if(i == 1) {
					i = temp;
					cnt++;
				}
				break;
			}
		}
	}
	cout << cnt;
}