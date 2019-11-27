#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[]){
	int n = 0;
	int flag=1;
	int m = strlen(a);
	for(int i = 0;i < m;i++){
		if(flag==0&&(a[i]==' '||a[i]=='\t')){
			n++;
			flag = 1;
	    }
	    else flag = 0;
    }
    n++;
    return n;
}
int main()
{
	char a[] = "hello nice  to meet you	friend";
	int n = getWordCount(a);
	cout << n;


    return 0;
 }

