wang#include <iostream>
using namespace std;
void TRIM(char *S1)
{   while (*S1!=0)
	{
		if(*S1==32)
		S1++;
		else 
		{
		cout<<*S1;
		S1++;
	    }    
	}
}
int  main()
{
	char a[100],*S1=&a[0];
	cin.getline(a,100);
	TRIM(S1);
}
