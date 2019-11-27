(1).
#include <iostream>
using namespace std;
int main ()
{
	int i,j,n,m,a,b;
	cin>>i>>j;
	if(i<j)
	for(n=100;n<1000;n++)
	{
		m=n/100;
		a=n%100;
		b=n/10%10;
		if(n==m*m*m+a*a*a+b*b*b)
	    if(n>=i&&n<=j)
		cout<<n<<endl;
	}
	return 0;
}

(2).
#include <iostream>
using namespace std;
int main ()
{
	int n,m,k=0;
	cin>>n;
	m=n;
	for(;n>0;n/=10)
	{
		k*=10;
		k+=n%10;
    }
    if(k==m)
	cout<<"这是回文数"<<endl; 
 return 0;
}

(3).
#include <iostream>
using namespace std;
int main ()
{
	int i,j,a,n,sum;
	cin>>i>>j;
	if(i<j)	
	{
		for(n=i;n<=j;n++)
		{
		for(a=1,sum=0;a<n;a++)
		{
			if(n%a==0)
			sum+=a;}
			if(sum==n)
			cout<<"完全数:"<<sum<<" ";
		}
	    }
		return 0;	
}

