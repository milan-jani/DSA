//rotate left array by one place/position
#include <iostream>
using namespace std;

main()
{
    int a[] = {1,2,3,4,5};

    int n = sizeof(a) / sizeof(a[0]);
    int m=a[0];
    for (int  i = 0; i < n; i++)
    {
        a[i]=a[i+1];
    }
    a[n]=m;
    
    for (int  i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
      
}

