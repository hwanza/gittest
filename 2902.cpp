#include <iostream>
using namespace std;
int main() {
    string str;
    cin >> str;
    bool flag = 0;
	cout << str[0];
    for (int i = 1; i < str.length(); i++) {
		if(str[i] == '-') flag = 1;
		else {
			if(flag == 1) {
				cout << str[i];
				flag = 0;
			}
		}
    }
}

// bool flag 정말 많이 쓰인다 알아두자.

// 처음문자는 반드시 출력한다.
// '-'을 만나면 flag를 1로 설정한다.
// '-'가 아니라면.
// flag가 1일 때 출력하고 flag를 0으로 설정한다.

// 문자열을 받는다.
// 첫번째 문자를 name 배열에 넣는다.
// 만약에 '-' 들어오면 다음 문자를 name 배열에 넣는다.
// name 배열을 출력한다.