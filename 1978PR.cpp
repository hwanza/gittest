#include <iostream>
#include <limits.h>
using namespace std;

// int main() {
// 	int sum = 0, n;
// 	cin >> n;
// 	for(int i = 1; i <= n; i++) {
// 		if(n % i == 0) {
// 			sum+=i;
// 		}
// 	}
// 	cout << sum;
// }

int main() {
    int change, ways = 0, min = INT_MAX;
    cin >> change;
    for (int i = 0; i * 50 <= change; i++) {
        for (int j = 0; j * 10 <= change; j++) {
            if ((i * 50) + (j * 10) == change) {
                ways += 1;
                if (min > i + j) {
                    min = i + j;
                }
            }
        }
    }
    cout << ways << ' ' << min;
}