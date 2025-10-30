#include<iostream>
using namespace std;

void fib(int n,int k){
   if(n==0){
    
     return;
     cout<<endl;
   }

    fib(n-1,k);
   
    cout<<n<<" ";
    
    
}
void fib1(int n){
   if(n<=0) return;
    cout<<n--<<" ";
    fib1(n);
}
int main(){
    int n=10;
   // cout<<"hell0";
    // for(int i=0;i<n;i++){
    //   cout<<fib(i)<<" ";  
    // }
    fib(n,10);
    cout<<endl;
   // fib1(10);
}
