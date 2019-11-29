#include<iostream>
 using namespace std;
 int main()
 {int a[20];
  int x=21,round=0,m=21;
  for(int y=0;y<=20;y++)
   a[y]=y+1;
  while(1){
  for(int z=0;z<=20;z++){
  if(a[z]!=999)
   {round+=1;
  if(round%5==0)
    { a[z]=999;
  m-=1;
    }
   }
  if(m==1)
  break;
                       }
  if(m==1)
  break;
 }

 for(int n=0;n<=20;n++){
 if(a[n]!=999)
 cout<<"Winner is No."<<n+1;

 }

 return 0;
 }
