#include<iostream>
#include<cctype>
using namespace std;
int main(){
	char a[50];
     cin.getline(a,50);
          cout<<"Ô­×Ö·û´®Îª£º"<<a; 
          cout<<endl;
		for(int i=0;i<50;i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
		   a[i]+='a'-'A';
		}
	   cout<<a;
	
} 
