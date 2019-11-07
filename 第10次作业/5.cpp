#include<iostream.h>
#include<math.h>
int fun(int n)
{   int sum1=0;
	while(n)
	{   sum1+=n%10;
	    n/=10;
	}
	return sum1;
}
int  smith(int n)
{    int i,t,sum1=0,sum2=0;     
	 t=n;
     sum1=fun(n);
	 for(i=2;i<=sqrt(n);i++)
	     if(n%i==0)
		 {   
			 sum2+=fun(i);			     
		     n/=i;
			 i=1;
		 }
	 if(sum2!=0)
		 sum2+=fun(n);
	 //cout<<sum1<<'\t'<<sum2<<'\n';
	 if(sum1==sum2)
		 return 1;
	 else
		 return 0;	 
}
void main()
{    int i,n;
	 cin>>n;
	 if(smith(n))
	     cout<<n<<"是smith数"<<endl;
	 else
         cout<<n<<"不是smith数"<<endl;
	 for(n=4937774;;n++)
		 if(smith(n))
		 {   cout<<n<<"是4937774的下一个smith数"<<endl;
		     break;
		 }
}
