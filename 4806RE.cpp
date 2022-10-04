#include <iostream>
using namespace std;
int main() {
    int cnt = 0; char N;
    while (scanf("%c", &N) != EOF) {
        if (N == '\n') {
            cnt++;
        }
    }
	printf("%d", cnt);
}

//EOF 활용 문제
//https://takeknowledge.tistory.com/20