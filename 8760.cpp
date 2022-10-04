#include<iostream>
using namespace std;
//한 사람이 2칸을 차지한다
//테스트케이스 올리고 (N * K) / 2를 째려버리면
//홀수면 0이 나오고 짝수면 답이 나온다
//문제 번역은 인터넷에서 체크
int main() {
	int N, K, tc;
	cin >> tc;
	for(int i = 0; i < tc; i++) {
		cin >> N >> K;
		cout << (N * K) / 2 << '\n';
	}
}