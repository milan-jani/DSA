// isomorphic string 

#include <iostream>
using namespace std;

bool isIsomorphic(string s, string t) {
    if (s.size() != t.size()) {
        return false;
    }

    int size = s.size();

    for (int i = 0; i < size; ++i) {
        char sc = s[i];
        char tc = t[i];

        bool found = false;
        for (int j = 0; j < i; ++j) {
            if (s[j] == sc) {
                if (t[j] != tc) {
                    return false;
                }
                found = true;
            }
        }

        if (!found) {
            for (int j = 0; j < i; ++j) {
                if (t[j] == tc) {
                    return false;
                }
            }
        }
    }

    return true;
}

int main() {
    string s, t;
    cout << "Enter string s: ";
    cin >> s;
    cout << "Enter string t: ";
    cin >> t;

    cout << "Output: " << (isIsomorphic(s, t) ? "true" : "false") << endl;

    return 0;
}