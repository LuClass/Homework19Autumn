#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
  int i,j,result;
  cout<<endl;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
      cout<<i<<" "<<j<<" "<<result; 
    }
    cout<<endl;
  }
  return 0;
}