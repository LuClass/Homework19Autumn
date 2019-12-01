1
#include<iostream>
#include<string.h>
using namespace std;
bool daxie(char a){
if((a>=65)&&(a<=90))
return 1;
else
return 0;	
}
void change(char*a)
{
int i;
for(i=0;i<strlen(a);i++)
{if(daxie(a[i])==1)
a[i]=a[i]+32;	
}	
}
int main(){
	int i;
	char *a;
	cin.getline(a,100);
	change(a);
        cout<<a;	
	
}
2
#include<iostream>
#include<string.h>
using namespace std;
void sort(char *str[],int n){
	char *temp;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(strcmp(str[j],str[j+1])>0){
				temp=str[j];
				str[j]=str[j+1];
				str[j+1]=temp;
			}
		}
	}
}
int main(int argc,char * argv[]){
	sort(argv,argc-1);
	cout<<"ÉýÐò£º"<<endl;
	for(int i=1;i<argc;i++){
		cout<<argv[i]<<endl;
	}
	system("pause");
	return 0;
} 

