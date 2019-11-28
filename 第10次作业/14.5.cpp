#include<iostream>
using namespace std;

bool zs(int n)
{   int a=0;
	if(n==2||n==3||n==5||n==7) 
	return true;
	else {
	     for(int i=2;i<n;i++)
	       {  
	     	if (n%i==0) a++;
		   }
		 if(a==0)
		 return true;
		 else return false;
	     }
		 
}

bool issmith(int n)
{
	int wsh=0,ysh=0;int m=10;
	for(int i=1;i<10;i++)
	  {
	  wsh=n%10+wsh;
	   m=m*10;
     }
	 for (int k=1;k<n;k++)
	  if (zs(k)==1 && n%k==0)
	     ysh=ysh+k;
	if(wsh==ysh) 
	return true;
}

int main ()
{   
	int n;
   cin>>n;
   if(issmith(n)==1) cout<<"n is Smith";
   else cout<<"n is not Smith";
   cout<<endl; 
   int k=4937775;
for(;k<1e20;k++)
      if (issmith(k)==1)
      cout<<"smith>4937774="<<k<<endl;
return 0;
}

