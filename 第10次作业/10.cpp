#include<iostream.h>
void main()
{       int i,j,n,a[22];
        for(i=1;i<22;i++)
              a[i]=1;
        for(i=1,j=1;i<=100;i++,j++)
        {      if(j==22)
                    j=1;
               if(a[j]==0)
               {    i--;
                    continue;
               }                  
               if(i%5==0)
                   a[j]=0;            
        }
        for(i=1;i<=21;i++)
             if(a[i]==1)
                 cout<<i;
}

