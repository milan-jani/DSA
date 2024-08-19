#include <iostream>
using namespace std;

main(){

int a[]={1,1,0,1,1,1,1};
int n=sizeof(a)/sizeof(a[0]);
 int max=0,c=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                c++;
               if(c>max)
               max=c;
            }
            else
            c=0;
        }

        cout<<max;

}