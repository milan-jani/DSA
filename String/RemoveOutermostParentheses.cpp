#include<iostream>
#include<string>
using namespace std;

main(){
    string s="(()())(())";//op="()()()"
    string o="";
        int a=0;//opencount
        for(char c : s){
            if(c=='('){
                if(a>0){
                    o +=c;
                }
                a++;
            }
            else if(c==')'){
                if(a>1){
                    o += c;

                }
                a--;
            }
        }
       cout<<o;

}
        
    
