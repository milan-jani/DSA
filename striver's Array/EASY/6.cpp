//rotate left array by d place/position
#include <iostream>
using namespace std;

main()
{
    int a[] = {1,2,3,4,5,6,7};

    int n = sizeof(a) / sizeof(a[0]);
    int m,d=0;
    int rotate=3;
    while(d<rotate){
        m = a[0];
      for (int  i = 0; i < n; i++)
    {
        a[i]=a[i+1];
    }
    a[n-1]=m;
    d++;
    }
   
   
    
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
      
}

