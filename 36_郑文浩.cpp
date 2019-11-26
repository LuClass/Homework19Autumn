#include<iostream>
#include<string.h>
#include<iomanip>
using namespace std;
void sort(char* s[],int c[],int n){                              
	char* t;                                                     //T4 
	int temp;
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++){
		    if(!strcmp(s[j],s[i]))
		    	c[i]++;
		}
	}
	for (int i=0;i<n-1;i++){
		for (int j=0;j<n-2;j++){
			if (c[j]<c[j+1]){
				t=s[j];
				s[j]=s[j+1];
				s[j+1]=t;
				temp=c[j];
				c[j]=c[j+1];
				c[j+1]=temp;
			}
		}
	}
}

int main(){
	char s[10][20];
	char* ss[]={s[0],s[1],s[2],s[3],s[4],s[5],s[6],s[7],s[8],s[9]};
	int n;
	cin>>n;
	int c[10];
	for(int i=0;i<10;i++){
		c[i]=0;
	}
	
	for (int i=0;i<n;i++){
		cin.getline(s[i],20);
	}
	sort(ss,c,n);
	cout<<endl<<endl;
	for(int i=0;i<10;i++){
		cout << c[i];
	}
	for (int i=0;i<n;i++){
		cout<<s[i]<<endl;
	}
	    int a[50],toInt=0,i=0;
    char str[100];                                      //T5 
    cin.getline(str,100);
    char *s1=str;
    do{
        if(*s1>='0'&&*s1<='9')
            toInt=toInt*10+*s1-48;  
        else{
            if(toInt){
				a[i++]=toInt;
			}
			toInt=0;
        }
    }while(*s1++!=0);
    for(int j=0;j<i;j++){
		cout<<a[j]<< " ";
	}
	cout<<"共有"<< i << "个整数" ;
	return 0;
} 
