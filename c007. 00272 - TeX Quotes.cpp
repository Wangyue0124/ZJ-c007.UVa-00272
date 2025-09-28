#include <iostream>
#include <string>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    bool TeX = false;
    while (getline(cin,s)) {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '"') {
                if (TeX) {
                    cout << "''";
                    TeX = false;
                }
                else {
                    cout << "``";
                    TeX = true;
                }
            }
            else cout << s[i];
        }
        cout << "\n";
    }
    return 0;
}
