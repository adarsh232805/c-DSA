#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n; i += 6) {
        
        string part1 = s.substr(i, 3);
        cout << part1;

        
        if (i + 3 < n) {
            string part2 = s.substr(i + 3, 3);
            reverse(part2.begin(), part2.end());
            cout << part2;
        }
    }

    return 0;
}
