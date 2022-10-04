#include <iostream>
using namespace std;
int main() {
    long long A, B, C, BEP;
    scanf("%lld %lld %lld", &A, &B, &C);
    for (int i = 1; i < 2147483647; i++) {
        if ((A + (B * i)) < (C * i)) {
        	cout << i << '\n';
        }
    }
}