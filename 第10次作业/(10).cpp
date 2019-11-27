using namespace std;
#include <iostream>
int main()
{
	int a[102],flag[22],i,j,last,first;
    for(j=0;j<=21;j++)
    flag[j]=1;
	a[0]=0;
	j=1;
	first=1;
	last=21;
	for(i=1;i<=101;i++)
	{
		while(flag[j]==0)
		j++;
		a[i]=j;
		if(i%5==0) flag[j]=0;
		if(i%5!=0) flag[j]=1;
		while(flag[first]==0) first++;
		while(flag[last]==0) last--;
		j++;
		if(j>last) j=first;		
	}
	cout<<a[101]<<endl;
	return 0;
}
