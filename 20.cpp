#include<iostream>
#include<string.h>
using namespace std;
int GetRev(char a[])
{
	int count = 0;
	for(int i=0;i<strlen(a);i++){
		for(int j=i+1;j<strlen(a);j++){
			if(a[i]>a[j])
				count++;
		}
	}
	return count;
}
int main()
{
	int max;
	cout<<"input your string number:\n";
	cin>>max;
	cout<<"input string:(length<=20)\n";
	char a[max][20];
	int num[max];
	for(int i=0;i<=max;i++){
		cin.getline(a[i],20); 
		num[i] = GetRev(a[i]); 
	}
	for(int i=0;i<=max-1;i++){
		int temp;
		char temp_a[20];
		for(int j=i+1;j<=max;j++){
			if(num[i]>num[j]){
				temp = num[i];
				strcpy(temp_a,a[i]);
				num[i] = num[j];
				strcpy(a[i],a[j]);
				num[j] = temp;
				strcpy(a[j],temp_a);			
			}
		} 
	} 
	cout<<"answer:"<<endl;
	for(int i=0;i<=max;i++)
	{
		cout<<a[i]<<" "<<num[i]<<endl;
	}	
	return 0;
} 


// using namespace std;
// #include <iostream>
// #include <string.h>
// #include <stdlib.h>
// void Sort(char * strs[], int n){		
// 	char *temp;
// 	for(int i = 0; i < n-1; i++)				
// 		for(int j = 0; j < n-i-1; j++)
// 			if(strcmp(strs[j], strs[j+1]) > 0){
// 				temp = strs[j];				
// 				strs[j] = strs[j+1];
// 				strs[j+1] = temp;
// 			}
// }
// bool Search(char *str2[], int n, char str1[])
// {
// 	for(int i=0;i<n;i++)
// 		if(!strcmp(str2[i], str1)) 
//             return false;
// 	return true;
// }
// void fun(char * str[], int n){		
// 	char *s2[n];
// 	int i;
// 	int e,f;
// 	for(i=0;i<n;i++)
// 	s2[i] = (char*)malloc(sizeof(char)*30);
// 	int num[50];
//     int j,k;
// 	j=1;
// 	k=1;
// 	s2[0]=str[0];
// 	for(i=1;i<n;i++)
// 	{
// 		if(Search(s2,j,str[i])==1)
// 		{
// 			s2[j]=str[i];
// 			j++;
// 			k++;
// 		}
// 	}
//     int b[10];
// 	for(i=0;i<k;i++){
// 		b[i]=0;
// 		for(j=0;j<n;j++){
// 			if(strcmp(str[j],s2[i]) == 0) 
//                 b[i]++;
// 		}
// 	}
// 	int max=0;
// 	for(i=0;i<k;i++){
// 		for(j=0;j<k;j++){
// 		if(b[j]>max){
// 			max=b[j];
// 			f=j;
// 		}
// 	}
//         for(e=0;s2[f][e];e++)
//             cout<<s2[f][e];
//         cout<<":"<<max<<endl;
//         b[f]=0;
//         max=0;
//         f=0;
// 	}

// }

// int main()
// {
// 	int n,i;
// 	cin>>n;
//     char **s1 =new char*[n]; 
// 	for(i=0;i<n;i++){
// 		s1[i]=new char[20];	
// 		cin>>s1[i];
// 	}
// 	Sort(s1,n);
// 	fun(s1,n);
// 	delete []s1;
// 	return 0;
// }