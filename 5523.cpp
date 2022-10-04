#include<iostream>
using namespace std;
int main() {
	int tc, A, B, Acnt = 0, Bcnt = 0;
	cin >> tc;
	while(tc--) {
		cin >> A >> B;
		if(A > B) {
			Acnt++;
		}
		if(B > A) {
			Bcnt++;
		}
		if(A == B) {
			Acnt+=0;
		}
	}
	cout << Acnt << ' ' << Bcnt;
	//EASY MAN
}