#include <iostream>
using namespace std;
int main() {
    int tc, s, n, result, cnt, price;
    cin >> tc;
	for(int i = 0; i < tc; i++) {
		cin >> s >> n;
		result = s;
		for(int i = 0; i < n; i++) {
			cin >> cnt >> price;
			result += cnt * price;
		}
		cout << result << '\n';
	}
}