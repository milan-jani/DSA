#include <iostream>
using namespace std;

main()
{
    int a[] = {4,6,4,5,6,2};

    int n = sizeof(a) / sizeof(a[0]);
    int c=1;
    int sum=1;
    for (int  i = 0; i < n-1; i++)
    {
     if(a[i+1]>a[i]){
        sum+=(++c);

     }
     if(a[i+1]<a[i]){
        c=1;
        sum +=c;

     }
    //  else
    //   sum+=c;


    }
    cout<<sum;
    
  
      
}

