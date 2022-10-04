#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = 1;; i++) {
        if (i % 2) {
            // 0은 false, 0 이외의 수는 전부 true
            if (n - i < 0) {
                cout << -(n - i);
                break;
            }
            // 푸앙이가 질 경우, 부족한 바둑알 수 만큼 추가해야한다.
        } else {
            if (n - i < 0) {
                cout << "0";
                break;
            }
            // 상대방이 질 경우
        }
        n -= i;
    }
}
