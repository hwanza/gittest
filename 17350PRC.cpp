#include <iostream>
#include <string.h>
using namespace std;
int main() {
    int tc;
    string N;
    cin >> tc;
    while (tc--) {
        cin >> N;
        if (N == "anj") {
            cout << "뭐야;" << '\n';
			break;
        } else {
            cout << "뭐야?" << '\n';
			break;
        }
    }
}