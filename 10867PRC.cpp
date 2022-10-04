#include <iostream>
using namespace std;
int main() {
    int array[100000], N, check[100000] = {}, idx;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> array[i];
    }
	for(int i = 0; i < sizeof(array); i++) {
		idx = array[i];
		check[idx]++;
	}
    for(int i = 0; i < N; i++) {
		if(check[i] >= 2) {
			cout << i << ' ';
		}
	}
}