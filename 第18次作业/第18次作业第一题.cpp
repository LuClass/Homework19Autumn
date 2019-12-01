#include<iostream>
using namespace std;
size_t strcat(char*s1,const char*s2)
{if((s1==NULL)||(s2==NULL))
return 0;
while(*s1!=0){
*s1++;
}
while(*s2!=0){
*s1++=*s2++;	
	
	
}
	
*s1=0;
	
	
	
}



int main(){
char*s1;
cin.getline(s1,10);
const char*s2;
s2="666";	
strcat(s1,s2);
cout<<s1;	
	
	
	
	
	
	
	
}
