#include<iostream>

using namespace std;

main(){
    string s="(1+(2*3)+((8)/4))+1";//op=3
  

        int c=0, max=0;
        for(int i=0;i<s.size();i++){
           if(s[i]=='('){
             c++;
            
           }
          if(s[i]==')'){
             c--;
            
           }
           max=(c>max)? c:max;
        }
        cout<< max;
    }
