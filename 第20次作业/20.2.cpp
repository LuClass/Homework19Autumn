#include <iostream>
#include <string.h>
using namespace std;
struct add{
	char *p=NULL;
	int len=0;
};
int main (){
	int n;
	cin>>n;
	add *a=new add[n];
	for(int i=0;i<n;i++){
	cout<<i+1<<'$';
	cin>>a[i].len;
	a[i].p=new char[a[i].len];
	cin>>a[i].p;
	cout<<endl;
	}//c++11才行 
	
	//内容排序
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			for(int c=0;*(a[j].p+c);c++){
				if(*(a[j].p+c)>*(a[j].p+c+1)){
					char*d={0};
					strcpy(d,a[j].p+c);
					strcpy(a[j].p+c,a[j].p+c+1);
					strcpy(a[j].p+c+1,d);
					break;
				}
			}
		}
	} 
	for(int i=0;i<n;i++)
	cout<<a[i].p<<endl;
	//次数排序
	int *s=new int[n];
	for(int i=0;i<n;i++){
		s[i]=0;
	}
	for(int i=0;i<n&&*a[i].p;i++){
		for(int j=i+1;j<n;j++){
		int sum=0;
		bool t=1;
		for(int k=0;k<a[i].len&&k<a[j].len;k++)	{
			if(*(a[i].p+k)!=*(a[j].p+k)) t=0;
			if(t&&a[i].len==a[j].len) {
				sum++;
				strcpy(a[j].p,"/0");
			}
		}
		}
	}
	for(int j=n;j>0;j--){
		for(int i=0;i<n;i++){
			if(s[i]==j){
				cout<<a[i].p<<' '<<s[i]<<endl;
				s[i]=0;
				j++;
			}
		}
	}
	 
}
