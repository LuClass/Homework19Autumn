#include <iostream>
#define M 100
using namespace std;
int getWordCount(char *a){
	int count=0;
	for(int i=0;*(a+i);i++)
	{
	  if(*(a+i)!=' '&&*(a+i)!='	')
	     count+=0;
	     else count++;
	}
	count+=1;
	return count;
}

int main(){
	int n;
	char a[M];
	cin.getline(a,100);	
	n=getWordCount(a);
	cout<<"The number of the words is "<<n;
}
