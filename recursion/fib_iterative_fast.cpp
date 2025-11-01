#include<iostream>
#include<vector>
using namespace std;



int main(){
    int n;
    cin>>n;
  
    vector<int> mem(n+1,-1);
    mem[0]=0;
    mem[1]=1;
    for(int i=2;i<=n;i++){
        mem[i]=mem[i-1]+mem[i-2];
    }
    cout<<mem[n];
}
