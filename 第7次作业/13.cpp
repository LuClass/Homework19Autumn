using namespace std;
#include <iostream>
int main()
{
	int i,j,k,n=100;
	cout<<"water flower'number is:";
	for(n=100;n<1000;n++)
	{
		i=n/100;
		j=n/10%10;
		k=n%10;
		if(n==i*i*i+j*j*j+k*k*k)
		  cout<<n<<"\t";
	}
	return 0;
}
