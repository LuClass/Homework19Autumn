#include<iostream>
using namespace std;
int main()
{char a[51],b[51];
cin.getline(a,50);
for(int i=0;i<51;i++)
{b[i]=a[i];
if(a[i]>='A'&&a[i]<='Z')
a[i]=a[i]-'A'+'a';
}
cout<<"before  "<<b<<endl;
cout<<"after  "<<a<<endl;
return 0;
}
