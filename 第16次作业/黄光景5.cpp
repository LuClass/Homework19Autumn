
#include <iostream>
#include <cstring>
using namespace std;
void f(char c[],int t[],int &a){
	int co=0;
	for(int i=strlen(c)-1;i>=0;--i){
		int s=0,k=1;
		while(c[i]>='0'&&c[i]<='9'&&i>=0){
			s+=k*(c[i]-'0');
			k*=10;
			i--;
		}
		if(s!=0)
		t[co++]=s;
	}
	a=co;
	return;
}
int main()
{
	int n,a;
	int t[100];
	char c[100];
	cin.getline(c,100);
	f(c,t,a);
	cout<<"¸öÊıÎª£º"<<a<<endl;
	for(int i=a-1;i>=0;--i)
	cout<<t[i]<<endl;
	return 0;
}

