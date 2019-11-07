#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
void getRandom(int a[],int n)
{int i;
srand(time(NULL));
for(i=0;i<100;i++)
a[i]=rand()%101;
}
int getMax(const int a[],int n)
{int y=0;
for(int i=1;i<100;i++){
if(a[y]<a[i])
    y=i;
                      }
return y;
}

int main()
{int a[100],n=100;
getRandom(a,n);
cout<<"数组a中最大值下标为"<<getMax(a,n);
return 0; 
}
