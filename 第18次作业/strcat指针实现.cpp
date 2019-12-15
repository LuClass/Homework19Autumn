#include<iostream>
using namespace std;
int main()
{
	char a[20];
	char b[20];
	cin.getline(a,20);
	cin.getline(b,20);
	char *p=b;
	int i;
	for(i=0;a[i]!='\0';i++);
	for(;*p!='\0';p++){
		a[i]=*p;
		i++;
	}
	cout << a; 
	 


    return 0;
 }

