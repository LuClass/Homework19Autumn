#include <iostream>
using namespace std;
int main (){
	char a[100];
	cin.getline(a,100);
	int sum=0;
for(char *c=a;*c;c++){
    if(*c>='0'&&*c<='9'&&(*(c+1)<'0'||*(c+1)>'9'||!*(c+1)))
    sum++;	
}
int *b=new int[sum];
int i=0;
int x=0;
for(char *c=a;*c;c++){
	if(*c>='0'&&*c<='9'){
	 x=x*10+*c-48;	
	}
    if(*c>='0'&&*c<='9'&&(*(c+1)<'0'||*(c+1)>'9')){
    	b[i]=x;
        i++;
	}
	if(c==a||((*c<'0'||*c>'9')&&(*(c+1)>='0'&&*(c+1)<='9')))
	 x=0;
}
for(int i=0;i<sum;i++){
	cout<<b[i]<<endl;
}
return 0;
}
