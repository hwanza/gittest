#include<iostream>
using namespace std;
int main() {
	string str; int cnt = 0;
	getline(cin, str);
	for(int i = 0; i < str.length(); i++) {
		if(str[i] == ' ') cnt++;
	}
	if(str[0] == ' ') cout << cnt;
	else {
		if(str[str.length() - 1] == ' ') cout << cnt;
		else cout << cnt + 1;
	}
}

// 문자열을 받는다.
// 문자열을 하나씩 훑어보고 공백의 개수를 출력한다.
// 만약에 공백이 먼저 들어온다면 공백의 개수를 그대로 출력한다.
// 그게 아니라면 만약에 마지막에 공백이 들어오면 공백의 개수 아니면 그대로 공백의 개수 + 1를 출력한다.