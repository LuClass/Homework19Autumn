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


#include<iostream>
#include<string.h>
using namespace std;
int main(int argc,char *argv[])
{
	char *temp;
	for(int i = 1;i<argc;i++)
	{
		for(int a = 1;a<argc-i-1;a++)
		if(strcmp(argv[a],argv[a+1])>0)
		{
			temp = argv[a];
			argv[a] = argv[a+1];
			argv[a+1] = temp;
		}

	}
	for(int a=1;a<argc;a++)
	cout<<argv[a]<<endl;
}