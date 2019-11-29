#include<iostream>
 #include<string.h>
 using namespace std;
int cd(const char * s){
	if (s == NULL) return -1;
	const char *s1 = s;
	while(*s != 0)
		s++;
	return s - s1;
}

void zhuanhuan(char * ch)
{

	int n=cd(ch);
	for(int i=0;i<n;i++)
	{
		if(*(ch+i)>=65&&*(ch+i)<=90)
		*(ch+i)=*(ch+i)+32;
		cout<<*(ch+i);
	}
}




int main()
{
	char*ch;
	cin.getline(ch,20);
	zhuanhuan(ch);
} 










