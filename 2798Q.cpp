#include<iostream>
using namespace std;
int main() {
	int N, M, array[100] = { 0 }, result = 0;
	cin >> N >> M;
	for(int i = 0; i < N; i++) {
		cin >> array[i];
	}
	for(int i = 0; i < N; i++) {
		for(int j = i + 1; j < N; j++) {
			for(int k = j + 1; k < N; k++) {
				if(array[i] + array[j] + array[k] <= M && array[i] + array[j] + array[k] > result) {
					result = array[i] + array[j] + array[k];
				}
			}
		}
	}
	cout << result << '\n';
}