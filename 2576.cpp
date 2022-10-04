#include <iostream>
using namespace std;
int main() {
    int array[7], cnt = 0, cnt2 = 0, sum = 0;
    for (int i = 0; i < 7; i++) {
        cin >> array[i];
        if (array[i] % 2 == 0) {
            cnt++;
        }
    }
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 7; j++) {
            if (array[i] > array[j]) {
                int temp;
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    for (int i = 0; i < 7; i++) {
        if (array[i] % 2 != 0) {
            sum += array[i];
        }
    }
    for (int i = 0; i < 7; i++) {
        if (array[i] % 2 != 0) {
            cnt2 += array[i];
            break;
        }
    }
    if (cnt == 7) {
        cout << "-1";
    } if(cnt != 7) {
        cout << sum << '\n' << cnt2;
    }
}