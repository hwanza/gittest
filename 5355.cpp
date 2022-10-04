#include <iostream>
using namespace std;
int main() {
    double n;
    int tc;
    string str;
    cin >> tc;
    while (tc--) {
        cin >> n;
        getline(cin, str);
        for (int i = 1; i < str.length(); i += 2) {
            if (str[i] == '@') {
                n *= 3;
            }
            if (str[i] == '%') {
                n += 5;
            }
            if (str[i] == '#') {
                n -= 7;
            }
        }
        cout << fixed;
        cout.precision(2);
        cout << n << '\n';
    }
}