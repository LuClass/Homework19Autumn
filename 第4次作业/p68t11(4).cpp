#include<iostream>
using namespace std;
int main(void)
{
	int n=0;
	char a;
	cout<<"in put several char:"<<endl;
	do 
	{
		a=cin.get();
		if (a>='0'&&a<='9')
		{
			n++;
		}
	}while (a!='\n');
	cout<<n<<" number（s）";
	return 0;
}