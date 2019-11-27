#include <iostream>
using namespace std;
int main(){ int i,j,result;
  printf("\n");
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
      cout<<i<<"*"<<j<<"="<<result<<"\t";
    }
    cout<<"\n"<<endl; 
  }return 0; 
} 
