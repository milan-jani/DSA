#include<iostream>
using namespace std;

int fact(int n){ //tc=O(n) sc=O(n)
    if(n==0) return 1;
    return n*fact(n-1);
    
}


int main(){
    int n=45;
   
    cout<<fact(n);
}
