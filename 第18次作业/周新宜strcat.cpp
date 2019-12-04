zhou'xinusing namespace std;
#include <iostream>
char* Strcat(char *des, const char *src)
{
	char *temp = des;                   
	while (*temp != '\0')               
		temp++;                        
	while ((*temp++ = *src++) != '\0'); 
	return des;                      
}
 
int main()
{
	char str1[20] = "abc";
	char str2[] = "bcd";
	char* str3 = Strcat(str1, str2);
    cout<<str3<<endl;
	return 0;
}
