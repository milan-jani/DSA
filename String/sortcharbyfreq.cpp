// Sort Characters by frequency

#include <iostream>
using namespace std;

void frequencySort(char s[]) {
    int freq[256] = {0}; // assuming ASCII characters

    int len = 0;
    while (s[len] != '\0') {
        freq[(int)s[len]]++;
        len++;
    }

    for (int i = 0; i < 256; i++) {
        while (freq[i]-- > 0) {
            cout << (char)i;
        }
    }
}

int main() {
    char s[100];
    cout << "Enter a string: ";
    cin >> s;

    frequencySort(s);

    return 0;
}