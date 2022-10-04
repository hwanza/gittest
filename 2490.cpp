#include <iostream>
using namespace std;
int main() {
  int A, B, C, D, sum;
  for (int i = 1; i <= 3; i++) {
    cin >> A >> B >> C >> D;
	sum = A + B + C + D;
	if(sum == 0) {
		cout << "D" << '\n';
	}
	else if(sum == 1) {
		cout << "C" << '\n';
	}
	else if(sum == 2) {
		cout << "B" << '\n';
	}
	else if(sum == 3) {
		cout << "A" << '\n';
	}
	else if(sum == 4) {
		cout << "E" << '\n';
	}
  }
}