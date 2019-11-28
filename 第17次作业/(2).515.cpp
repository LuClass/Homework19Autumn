#include<iostream>
#include<string.h>
using namespace std;

const int n=5;
void p(char *argv[],int n)
{ 
   int i,j;
   char *temp;
   for(i=0;i<n;i++)
   {   
    for(j=0;j<n-i-1;j++)
    {
      if(strcmp(argv[j],argv[j+1])<0)
      {
       temp=argv[j];
       argv[j]=argv[j+1];
       argv[j+1]=temp;
      }
    } 
   }
}
int main(int argc,char *argv[])
{
   int i,j;
   p(argv,n);
   for(i=0;i<n;i++)
   cout<<argv[i]<<" ";
   return 0;
}
