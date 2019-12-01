#include<iostream>
#include<string.h>
using namespace std;
int getWordCount(char a[])
{
	int n=strlen(a),count=0;
	bool danci= false; 
	for(int i=0;i<n;i++) 
	{
		if((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')) 
		{
			if(danci==false) 
			{
				danci=true;
				count++;
			}
		}
		else if(danci)
		danci=false;
	}
	return count;
}
int main(){
	char a[999] = {"For     the  Great  GOODS.    GGAD!!!!"};
	cout << getWordCount(a);
}
