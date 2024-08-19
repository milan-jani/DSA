#include<iostream>
using namespace std;

main(){
    int a[5]={5,6,2,8,9};
    int max=a[0];
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<max;


}


