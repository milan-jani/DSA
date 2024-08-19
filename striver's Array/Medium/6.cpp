//	Leaders in an Array problem

#include<iostream>
using namespace std;
main(){
     int a[]={16,17,4,3,5,2};  //op=17 5 2
     int n=sizeof(a)/sizeof(a[0]);
    

     int c=0;
       for(int i=0;i<n;i++){
           bool mark=true;
           
           for(int j=i+1;j<n;j++){
               if(a[i]>=a[j]){
               mark=true;
               }
              else{
                mark=false;
                break;
           }
           }
          if(mark==true)
            cout<<a[i]<<" ";
          
       }
      
          }

  