#include<iostream>
#include<string.h>
#define line 10 
#define row  20
using namespace std;
bool isequal(char a[], char b[]){
int x,y;
x=strlen(a);y=strlen(b);
if(x!=y)
return false;
int count=0;
char *p=&a[0];
char *q=&b[0];
for(;*p!=0;){
if(*p==*q)
count++;
p++;
q++;
}
if(count==x)
return true;
else
return false;
}
int main (){
	int n;
char temp[20];
int temp1;
	cout<<"ÊäÈënµÄÖµ£¨n>2£© n=";
   	cin >>n;
	if(n<=2)
	return 0;
    char a[line][row];
    for(int i=0;i<=n;i++)
    cin.getline(a[i],row);
	int b[line];
for(int i=0;i<=n;i++){
b[i]=0;
for(int j=0;j<=n;j++){
if(isequal(a[i],a[j]))
b[i]++;
}
}
for(int i=0;i<=n;i++){
for(int j=i+1;j<=n;j++){
if(b[i]<b[j]){£© 
strcpy(temp,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],temp);
temp1=b[i];
b[i]=b[j];
b[j]=temp1;
}
}
}
for(int i=0;i<=n;i++)
cout << a[i] << "  ";
}

