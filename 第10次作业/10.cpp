#include <iostream>
using namespace std;
int main()
{
    int n=21;
    int a[21];
    int i,j;
    for(i = 0; i < n; i++)
      a[i] = i+1;
    while (n > =2)
    {
        i = (i + 4) % n;
        for(j = i+1; j < n; j++)
        {
           a[j-1] = a[j];
        }
        n--;
        if(i == n)
          i = 0;  
    }
    cout<<a[i];
    return 0;
}

 
