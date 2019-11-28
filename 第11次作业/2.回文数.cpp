#include <iostream> 
using namespace std;
bool ishuiwen(int n)
{
    int a=1;
    while(n/a>=10)
    {
        a=a*10;
    }
    while(n!=0)
    {
        if(n/a!=n%10)
        {
            return false;
        }
        n=(n%a)/10;
        a=a/100;
    }
    return true;
}
int main()
{
    int n;
    cin>>n;
    if(ishuiwen(n))
    {
        cout<<"该数是回文数"<<endl;
    }
    else
    {
        cout<<"该数不是回文数"<<endl;
    }
    return 0;
}
