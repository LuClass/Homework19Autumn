#include <iostream> 
using namespace std;
int main()
{
    int num,ans=0,k=1;
    cin>>num;
    while (num)
    {
        ans+=k*(num%2);
        num/=2;
        k*=10;
    }
    cout<<ans<< endl;
    return 0;
}
