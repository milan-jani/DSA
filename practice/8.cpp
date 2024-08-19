//Move Zeros to end

#include <iostream>
using namespace std;

int main()
{
    int a[] = {1, 0, 0, 2, 4, 0, 5};
    int n = sizeof(a) / sizeof(a[0]);

    int j = 0; 
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            a[j] = a[i];
            j++;
        }
    }

    for (int i = j; i < n; i++)
    {
        a[i] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}