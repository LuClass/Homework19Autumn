#include<iostream>
using namespace std;

int getRev(char *a);
void outRev(char *a[], int n);
int getWordCount(char *a);

int getRev(char *a){
	char*b = a;
	int count = 0;
	while(*b){
		char*c=b+1;
		while(*c){
			if(*b>*c)
			    count++;
			c++;
		}
		b++;
	}
	return count;
}

void outRev(char *a[], int n){
	int count[n];
	for(int i=0;i<n;i++)
		count[i]=getRev(a[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(count[j]>count[j+1]){
				swap(a[j], a[j+1]);
				swap(count[j], count[j+1]);
			}
		}		
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<':'<<count[i]<<endl; 
}

int getWordCount(char *a){
	char *b = a;
	int count;
	if(*a==' ') 
		count=0;
	else 
		count =1;
	while(*b){
		char *c = b+1;
		if(*b==' '&&*c!=' '&&*c!=0)
			count++;
		b++;
		c++;
	}
	return count;
}

int main()
{
	char a[10][20] = {"GHsja", "IHbIA", "BABiK", "AOhia", "XAIVa","VhsUA","AOQdu","aOUau","iwBOw","qugPO"};
	char *b[10];
	for(int i=0;i<10;i++)
	    b[i]=a[i];
	outRev(b, 10);
	char c[] = "   AHLDadk qkfVHA znoIQq   ";
	cout<<getWordCount(c)<<endl;
}




