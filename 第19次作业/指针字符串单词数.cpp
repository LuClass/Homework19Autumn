#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char *a){
	int n = 0;
	int flag=1;
	for(int i = 0;*(a+i)!='\0';i++){
		if(flag==0&&(*(a+i)==' '||*(a+i)=='\t')){
			n++;
			flag = 1;
	    }
	    else if(flag==1&&(*(a+i)==' '||*(a+i)=='\t')){
			flag = 1;
	    }
	    else flag = 0;
    }
    n++;
    return n;
}
int main()
{
	char a[] = "   hello   nice  to meet you	friend";
	char *p=a;
	int n = getWordCount(p);
	cout << n;


    return 0;
 }

