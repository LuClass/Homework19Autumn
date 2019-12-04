using namespace std;
#include <iostream>
#include <string.h>
#define M 100
int getWordCount (char *a)
{
	int count=0;
 	bool word=false;
 	for(int i=0;i<strlen(a);a++)
 	{
 		if(((*a+i)>='a'&&(*a+i)<='z')||((*a+i)>='A'&&(*a+i)<='Z'))
 		{
 			if(word==false)
 			{
 				word=true;
 				count++;
 			}
 		}
 		else if(word)
  		word=false;
 	}
 	return count;
}
int main()
 {
 	char a[M];
 	cin.getline(a,M);
 	int n=getWordCount(a);
  	cout<<n<<endl;
 }
