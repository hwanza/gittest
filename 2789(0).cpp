#include<iostream>
using namespace std;
int main() {
	string str, camb = "CAMBRIDGE";
	cin >> str;
	for(int i = 0; i < str.length(); i++) {
		for(int j = 0; j < camb.length(); j++) {
			if(str[i] == camb[j]) {
				str[i] = 0;
				break;
			}
		}
	}
	for(int i = 0; i < str.length(); i++) {
		if(str[i] != 0) {
			cout << (char)str[i];
		}
	}
}

// 1. 문자열을 받는다.
// 2. 문자열의 길이만큼 for문을 돌려서 배열에 넣는다.
// 3. for문을 돌면서 만약에 배열안에 CAMBRIDGE가 있으면 그때 배열 안에 있는 값을 0으로 넣는다.
// 4. 만약에 문자열이 0이 아니라면 출력한다.