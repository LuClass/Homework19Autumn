#include <iostream>
using namespace std;
int main()
{
char s[100] = {0};
int i,num=0,word=0;
cin.getline(s,100);
for(i=0;i<100;i++)
{
if(s[i]==' '||(s[i]<='9'&&s[i]>='0')) word=0;
else if(word==0 && s[i] != ' ' && s[i] != 0)
{
word=1;
num++;
}
}
cout<<num<<endl;
return 0;
}
