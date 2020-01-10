#include <iostream>
using namespace std;
int chartoint(int i,char b[100][100]){
	int n;
	for(n=1;b[i][n];n++);
	int sum=0;
	for(int j=0;j<n;j++){
		sum=sum*10+b[i][j]-48;
	}
	return sum;
}
int main (){
	char s[100];
	char b[100][100];
	cin.getline(s,100);
	int p=0;
    int q=0;
	for(int i=0;s[i];i++){
		if(s[i]>='0'&&s[i]<='9'){
			b[p][q]=s[i];
			q++;
		}
		else
		if(s[i+1]>='0'&&s[i+1]<='9'){
		  b[p][q+1]='\0';
			p++;
			q=0;
		}
	}
	const int n=p;
	int c[n];
	int i;
	if(s[0]>'9'||s[0]<'0')
	i=1;
	else
	i=0;
	for(;i<=n;i++){
		c[i]=chartoint(i,b);
		cout<<c[i]<<endl;
	}
	return 0;
}
