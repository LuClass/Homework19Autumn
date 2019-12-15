#include<iostream>
 #include<string.h>
 using namespace std;
 int main(void)
 {
 	char ch[50];
 	cin.getline(ch,50);
 	int len=strlen(ch),n,key=0;
 	for(int x=0;x<len;x++)
 	{
 		if(ch[x]>='0'&&ch[x]<='9')
 		{
 			if(key==0)
 			{
 				key=1;
 				n++;
 				continue;	
 			}
 			else			
 				continue;		
 		}
 		else
 			key=0;		
 	}
 	//cout<<n<<endl;
 	int *num=new int[n];
 	int k=0,count=0;
 	for(int x=0;x<=len;x++)
 	{
 		if(ch[x]>='0'&&ch[x]<='9')
 		{
 			if(key==0)
 			{
 				key=1;				
 				k=k*10+(ch[x]-48);
 				continue;	
 			}
 			else
 			{
 				k=k*10+(ch[x]-48);
 				continue;
 			}			

 		}
 		else
 		{
 			if(k)
 			{
 				num[count]=k;
 				count++;
 			}				
 			k=0;
 			key=0;
 		}					
 	}
 	for(int y=0;y<n;y++)
 		cout<<num[y]<<endl;
 	delete num;
 	return 0;
 }
