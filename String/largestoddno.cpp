#include<iostream>
using namespace std;

main(){
    string num="4294";
    int n = stoi(num);//convertin strin to integer like parsing
       
        int max=0 ;
        if (n % 2 != 0) {
            cout<< num;
        } else {
            for (char c : num) {
                if ((c - '0') % 2 != 0) {
                    max = (c - '0' > max) ? c - '0' : max;
                }
            }
            if(max >1)   cout<< to_string(max);
            else cout<< "";
        }
}


