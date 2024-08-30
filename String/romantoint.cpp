#include<iostream>
using namespace std;

main(){
     string s="MCMXCIV";
     int sum = 0;
    for (int i = 0; i < s.length(); i++) {
        int value = 0;
        switch (s[i]) {
            case 'I': value = 1; break;
            case 'V': value = 5; break;
            case 'X': value = 10; break;
            case 'L': value = 50; break;
            case 'C': value = 100; break;
            case 'D': value = 500; break;
            case 'M': value = 1000; break;
        }
        if (i + 1 < s.length()) {
            int nextValue = 0;
            switch (s[i + 1]) {
                case 'I': nextValue = 1; break;
                case 'V': nextValue = 5; break;
                case 'X': nextValue = 10; break;
                case 'L': nextValue = 50; break;
                case 'C': nextValue = 100; break;
                case 'D': nextValue = 500; break;
                case 'M': nextValue = 1000; break;
            }
            if (value < nextValue) {
                sum += nextValue - value;
                i++;
            } else {
                sum += value;
            }
        } else {
            sum += value;
        }
    }
    cout<< sum;
}