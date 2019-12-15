#include<iostream>
using namespace std;
char *strcat(char *s1,char *s2){
	int i=0,j=0;
	while(s1[i])
		i++;
	while(s2[j]){
		s1[i]=s2[j];
		i++;
		j++;
	}
	return s1;
}
int main(){
	char *s1,*s2,s3[20],s4[20];
	cin.getline(s3,20);
	cin.getline(s4,20);
	s1=s3;
	s2=s4;
	cout<<strcat(s1,s2);
	return 0;
}
