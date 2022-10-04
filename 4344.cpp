#include <iostream>
using namespace std;
int main() {
    int tc, student[1001] = {0};
    double n, sum = 0, cnt = 0;
    cin >> tc;
    while (tc--) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> student[i];
        sum += student[i];
    }
    for (int i = 0; i < n; i++) {
        if (student[i] > sum / n) {
            cnt++;
        }
    }
    cout << fixed;
    cout.precision(3);
    cout << (cnt / n) * 100 << "%" << '\n';
    sum = 0, cnt = 0;
    }
}