// remove duplicate element from array
#include <iostream>
using namespace std;

main()
{
    int a[] = {1,2,2,3,5,8,8};

    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n = n - 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

