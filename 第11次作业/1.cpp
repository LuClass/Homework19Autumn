#include <iostream>
using namespace std;
int main()
{
	int i,j,k,n,a,b;
  	cin>>a>>b;
  	for(n=a;n<=b;n++)
  	{
    	i=n/100;/*分解出百位*/
    	j=n/10%10;/*分解出十位*/
    	k=n%10;/*分解出个位*/
    	if(i*100+j*10+k==i*i*i+j*j*j+k*k*k)
      	cout<<n<<' ';
  	}
	return 0;
}
