#include<iostream>
using namespace std;
int main() {
	string str; int array[26] = { 0 }, max = -1, index = 0, check = 0;
	// array[26] = 각 알파벳에서의 개수 -> 이거 문제로 많이나옴
	// tolower() 소문자로 변환, toupper() 대문자로 변환
	cin >> str;
	for(int i = 0; i < str.length(); i++) {
		array[(tolower(str[i]) - 'a')]++;
		// 소문자a -> 아스키코드 97번 즉 숫자 97이다 --> array[tolower(str[i]) - 'a']++; 
		// a가 들어오면 array[0]++를 해준다
		// index + 'a' -> 사실상 index + 97 = 104
		// (char)104 = h
	}
	for(int i = 0; i < 26; i++) {
		if(array[i] > max) {
			max = array[i];
			index = i;
		}
		// 배열 안에서 가장 많이 쓰인 알파벳을 찾는다
		// 그때의 인덱스도 따로 변수로 저장하고 배열에 접근했을때 사용한다.
		// for문에서 i를 적극적으로 사용해보자
	}
	for(int i = 0; i < 26; i++) {
		if(array[i] == max) {
			check++;
		}
	}
	// 만약에 가장 많이 쓰인 알파벳이 중복되었을때 check변수를 만들어서 따로 저장한다.
	if(check == 1) {
		cout << (char)toupper(index + 'a');

	}
	// 만약에 check가 1이면 가장 많이 쓰인 알파벳이 중복 되었을 경우가 아니다
	// 그러므로 그때의 알파벳을 출력한다.
	else {
		cout << "?";
	}
	// 가장 많이 쓰인 알파벳이 2개 이상인 경우이기 때문에 문제에 나온 답으로 출력한다
}