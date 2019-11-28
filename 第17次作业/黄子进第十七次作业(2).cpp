#include<iostream>
using namespace std;
void A_to_a(char *ptr)
{
	for(int i = 0;ptr[i];i++)
	if(ptr[i]>='A'&&ptr[i]<='Z')
	ptr[i] -= 'A' -'a';
}
main()
{
	char a[40];
	cin.getline(a,40);
	A_to_a(a);
	cout<<a;
}
