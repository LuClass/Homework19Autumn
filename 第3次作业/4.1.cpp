#include <iostream>
#include <malloc.h>
using namespace std;

char *Zhuan(int x)
{
	char *a;
	char temp;
	int i;
	a= (char *)malloc(sizeof(char) * 33);
	int j = 0;
	while(x > 0)
	{
		a[j++] = x % 2 + '0';
		x /= 2;
	}
	for(i=0; i<j/2; i++)
	{
		temp = a[i];
		a[i] = a[j-1-i];
		a[j-1-i] = temp;
	}
	a[j] = '\0';
	return a;
}

int main()
{
	int x; 
	cin>>x;
	cout<<Zhuan(x)<<endl;
	return 0;
}


