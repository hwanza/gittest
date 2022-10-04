#include <iostream>
#include <limits.h>
using namespace std;
int main() {
    int change, ways = 0, min = INT_MAX;
    cin >> change;
    for (int i = 0; i * 5 <= change; i++) {
        for (int j = 0; j * 2 <= change; j++) {
            if ((i * 5) + (j * 2) == change) {
                if (min > i + j) {
                    min = i + j;
                }
            }
        }
    }
	if(min == INT_MAX) {
		cout << - 1;
	}
	else {
		cout << min;
	}
}