#include<iostream>
#include<string.h>
using namespace std;
void bubble(char data[][21],int a[],int n)
{int i,j,k;char temp[10][21];
for(i=0;i<n-1;i++)
for(j=0;j<n-1-i;j++)
if(a[j]<a[j+1])
{strcpy(temp[0],data[j]);
strcpy(data[j],data[j+1]);
strcpy(data[j+1],temp[0]);
k=a[j];
a[j]=a[j+1];
a[j+1]=k;


}
	
}
bool chongfu(char a[][21],char b[][21],int m,int n)
{int i;
for(i=0;i<n;i++){
if(strcmp(a[i],b[m])==0)
break;	
}
if(i==n)
return 0;
else
return 1;	
}




int main(){
int n,i,j,k=1,p=0;
cin>>n;
cin.get();
if(n<=2)
cout<<"输入有误";
else{
char s1[10][21];
char s2[10][21];
int b[10];
for(i=0;i<n;i++){
cin.getline(s1[i],21);
if (!cin)
{cin.clear();
cin.ignore(1024,'\n');
}
}
for	(i=0;i<n;i++){
for	(j=i+1;j<n;j++){
if(strcmp(s1[j],s1[i])==0)
k=k+1;		
}
if(chongfu(s2,s1,i,p)==0)
{strcpy(s2[p],s1[i]);
b[p]=k;
p++;
}
k=1;
}
bubble(s2,b,p);
for(i=0;i<=p-1;i++)
cout<<"字符串"<<s2[i]<<"   "<<"重复次数"<<b[i]<<endl;	
	
	
}

	
	
}	
	
	
	
	
	
	
	
	
