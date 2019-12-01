1.#include<iostream>
using namespace std;
 strcat(char str1[],char str2[]){
	char str3[100];
	char *p1=str1,*p2=str2,*p3=str3;
	for(;*p1!='\0';p1++,p3++){
	*p3=*p1;}
	for(;*p2!='\0';p2++,p3++){
	*p3=*p2;}
	*p3='\0';
	p3=str3;
	char *p4=str1,*p5=str3;
	for(;*p5!='\0';p4++,p5++){
	*p4=*p5;}
	*p4='\0';
	p4=str1;

}
int main(){
	char s1[10],s2[10];
	cin.getline(s1,10); 
	cin.getline(s2,10);
	strcat(s1,s2);
	cout<<s1<<endl;
	return 0;
	
}
2.#include<string.h>
using namespace std;
char*trim(char*s){
	if(s==NULL)return NULL;
	if(strlen(s)==0)return s;
	char*tail=s+strlen(s)-1;
	while(*tail=='')tail--;
	if(tail<s+strlen(s)-1)
	*(tail+1)='\0';
	char*head=s;
	while(*head=='')head++;
	char*h=s;
	if(head>h)
	 while(*h++=*head++);
	 return s;
}
int main(){
 	char s[]=" a b c ";
 	cout<<strlen(s)<<endl;
 	char *s1=trim(s);
 	cout<<s1<<endl;
   return 0;
 } 

