#include<iostream>
#include<vector>
using namespace std;

main(){
    string s="anagram";
    string t="nagaram";
    if (s.length() != t.length()) cout<< false;

        vector<int> countS(26, 0); // assuming ASCII alphabet size
        vector<int> countT(26, 0);

        for (char c : s) {
            countS[c - 'a']++;
        }
        for (char c : t) {
            countT[c - 'a']++;
        }

       if( countS == countT){
        cout<< "true";
       }
       else  cout<<"false";
}