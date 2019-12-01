#include<iostream>
using namespace std;
void fun (char*str)
{
int i=0;
char*p=str;
while(*p)
{
if(*p!=32) 
{
str[i]=*p;
i++;
}
p++;
}
str[i]=0; 
}
int main(){
	char*s;
	cin.getline(s,100);
	fun(s);
	cout<<s;
	
	
	
}
