#include<iostream>
using namespace std;

main(){
    int a[5]={5,6,2,8,9};
    int maxi=a[0];
    for(int i=0;i<5;i++){
       
        maxi=max(maxi,a[i]);
    }
   
    int max2=0;
    for (int i = 0; i < 5; i++)
    {
        if (a[i]>max2 && a[i] !=maxi)
        max2=a[i];
    }
    
    cout<< "2nd largest element:"<<max2;


}