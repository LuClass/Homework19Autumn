#include <iostream>
using namespace std;
#include <string.h>

void bubbleSort(char * strs[], int n)
{		
	char *temp;
	for(int i = 0; i < n-3; i++)				
		for(int j = 2; j < n-i-1; j++)
			if(strcmp(strs[j], strs[j+1]) > 0)
			{
				temp = strs[j];				
				strs[j] = strs[j+1];
				strs[j+1] = temp;
			}
}

int main(int argc,char *argv[])
{
	bubbleSort(argv,argc);
	for(int i=2;i<argc;i++)
	{
		cout<<argv[i]<<endl;
	}
	return 0;
}

