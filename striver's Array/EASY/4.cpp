//Remove duplicates from Sorted array

#include <iostream>
using namespace std;

main()
{
    int a[] = {0,0,1,1,1,1,1,2,2,2,3,3,4};

    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            for (int j = i+1 ; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n = n - 1;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

