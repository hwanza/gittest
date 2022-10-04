#include <algorithm>
#include <iostream>
using namespace std;
int main() {
    int N, K, J = 0, array[10001] = {0};
    cin >> N >> K;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            array[J] += i;
			J++;
        }
    }
    if (sizeof(array) < K) {
        cout << "0";
    } else {
        cout << array[K - 1];
    }
}