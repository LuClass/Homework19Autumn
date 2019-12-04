#include<iostream>
 using namespace std;
 void g(char *s)
 {
 	for(;*s;s++)
 	{
 		if(*s>='A'&&*s<='Z')
 		*s+=32;
 	}
 }
 int main(){
 	char *s;
 	char a[20];
 	cin.getline(a,20);
 	s=a;
 	g(s);
 	cout<<s;
 }
