#include<iostream>
 #include<string.h>
 using namespace std;

 int getn(char* ch)
 {
 	int n=0,y=0;
 	while(*ch!=0)
 	{
 		if(*ch>='0'&&*ch<='9'&&y==0)
 		{
 			y=1;
 			n++;			
 		}

 		if((*ch>='a'&&*ch<='z')||(*ch>='A'&&*ch<='Z'))
 		{
 			y=0;			
 		}
 		ch++;
 	}
 	return n;
 }

 void chouqu(char* ch,int* num,int n)
 {
 	int y=0,temp=0,x=0,y2=0;
 	while(*ch!=0)
 	{
 		if(*ch>='0'&&*ch<='9'&&y==0)
 		{
 			y=1;
 			y2=1;			
 		}
 		if(*ch>='0'&&*ch<='9'&&y==1)
 		{
 			temp=temp*10+(((int)*ch)-48);		
 		}
 		if(((*ch>='a'&&*ch<='z')||(*ch>='A'&&*ch<='Z'))&&y2==1||*(ch+1)==0)
 		{
 			y=0;
 			*(num+x)=temp;
 			temp=0;
 			x++;
 			y2=0;
 		}
 		if(((*ch>='a'&&*ch<='z')||(*ch>='A'&&*ch<='Z'))&&y2==0)
 		{
 			y=0;
 		}		
 		ch++;
 	}
 	for(int i=0;i<n;i++)
 		cout<<*(num+i)<<endl;
 	cout<<"end";
 }

 int main(void)
 {
 	char ch[30];
 	cin.getline(ch,30);
 	const int n=getn(ch);
 	int num[n];
 	chouqu(ch,num,n);
 	return 0;
 }
