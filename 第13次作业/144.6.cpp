#include<iostream>
#include<string.h>
#define M 20
#define max 3
using namespace std;

int getrev(char a[])
{  int m=strlen(a);int count=0;
   for(int i=0;i<m-1;i++)
    {for(int j=i+1;j<m;j++)
      if (a[i]>a[j]) count++;
    }
    return count;
}

int min(int a,int b)
{ if(a>b) return b;
   else return a;
}

int main()
{  char a[M],b[M],c[M];
   cin.getline(a,M);
   cin.getline(b,M);
   cin.getline(c,M);
   int c1=getrev(a),c2=getrev(b),c3=getrev(c);
   int m1=strlen(a),m2=strlen(b),m3=strlen(c);
    int x=min(c1,min(c2,c3));
    if(x==c1){for(int i=0;i<m1;i++) cout<<a[i];cout<<":逆序数为："<<c1<<endl;
               if(min(c2,c3)==c2) {for(int i=0;i<m2;i++) cout<<b[i];cout<<":逆序数为："<<c2<<endl;}
               else {for(int i=0;i<m3;i++) cout<<c[i];cout<<":逆序数为："<<c3<<endl;}
			 }
    if(x==c2){for(int i=0;i<m2;i++) cout<<b[i];cout<<":逆序数为："<<c2<<endl;
               if(min(c1,c3)==c1) {for(int i=0;i<m1;i++) cout<<a[i];cout<<":逆序数为："<<c1<<endl;}
               else {for(int i=0;i<m3;i++) cout<<c[i];cout<<":逆序数为："<<c3<<endl;}
			 }
	if(x==c3){for(int i=0;i<m3;i++) cout<<c[i];cout<<":逆序数为："<<c3<<endl;
               if(min(c2,c1)==c2) {for(int i=0;i<m2;i++) cout<<b[i];cout<<":逆序数为："<<c2<<endl;}
               else {for(int i=0;i<m1;i++) cout<<a[i];cout<<":逆序数为："<<c1<<endl;}
			 }		 
}
   






