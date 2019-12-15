using namespace std;
#include <iostream>
#include <string.h>
char *trim(char *s){
 	for(int i=0;i<strlen(s);i++)
	 {
 		if(s[i]==' ')
		 {
 			for(int j=i;j<strlen(s)+1;j++)
			 {
 				s[j]=s[j+1];
 			}
 			i--;
 		}
 	}
 	return s;
 }
int main()
{
	char s[]=" ab c 1 2 3";
	char*s1=trim(s);
	cout<<s1<<" "<<strlen(s1)<<endl;
	return 0;
}
