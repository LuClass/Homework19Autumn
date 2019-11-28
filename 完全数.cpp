using namespace std;
#include <iostream>
int main()
{
	int i,j,n,m,k;
	cout<<"Please input i and j(i<j)"<<endl;
	cin>>i>>j;
	for(n=i;n<=j;n++)
	{
		for(m=1,k=0;m<n;m++)
		{
		    if(n%m==0)
		    k+=m;
	    }
		if(k==n)
		  cout<<n<<'\t';
	}
	return 0;
}
