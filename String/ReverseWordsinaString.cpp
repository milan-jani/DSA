#include<iostream>
#include<string>

using namespace std;

main(){
    string input="Hello World";
    string output;
    string word;
    bool inWord = false;

    for (char c : input) {
        if (c == ' ') {
            if (inWord) {
                output = word + " " + output;
                word.clear();
                inWord = false;
            }
        } else {
            word += c;
            inWord = true;
        }
    }

    if (inWord) {
        output = word + " " + output;
    }

      cout<< output.substr(0, output.size() - 1);

}