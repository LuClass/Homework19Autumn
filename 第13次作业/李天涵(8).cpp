using namespace std;
#include <iostream> 
#include <string.h>
int Count(char a[])
{
	int i,count=1;
	if(a[0]==' ')  count=0;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]==' '&&a[i+1]!=' '&&a[i+1]!=0) count++;
	}
	return count;
} 

int main(){
	char a[1000];
	cin.getline(a,1000);
	cout<<Count(a);
	return 0;
}
