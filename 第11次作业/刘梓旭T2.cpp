#include<iostream>
using namespace std;
int main()
{int x,z=0;
cout<<"please input an integer x:";
cin>>x;
int y=x;
for(y;y!=0;y/=10)
{z*=10;
z+=y%10;
}
if(z==x)
cout<<"This number is hws";
else cout<<"This number is not hws";
return 0;
}
