#include<iostream>
using namespace std;
bool ifda(char a){
	bool flag;
	if(a>=65&&a<=90)
		flag=true;
	if(a>=97&&a<=122) 
		flag=false;
	return flag;	
}
int main()
{
	int i=0;
	char a[51];
	cin >> a;
	while(a[i]!='\0'){
		cout << a[i];
		i++;
	}
	i=0;
	cout <<endl; 
	while(a[i]!='\0'){
		if(ifda(a[i])){
			a[i]=a[i]+32; 
		}
		cout << a[i];
		i++;
	}	
	


    return 0;
 }

