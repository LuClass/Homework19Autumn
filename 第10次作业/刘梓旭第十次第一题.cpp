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
cout<<"¨ºy¡Á¨¦a?D¡Á?¡ä¨®?¦Ì??¡À¨º?a"<<getMax(a,n);
return 0; 
}
