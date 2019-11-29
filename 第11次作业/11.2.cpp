#include <iostream>
using namespace std;
int main()
{

  cout<<endl<<"T2:  input n:"<<endl;
    long ge,shi,qian,wan,x;
   cin>>x;
  wan=x/10000;
  qian=x%10000/1000;
  shi=x%100/10;
  ge=x%10;
  if(ge==wan&&shi==qian)
    cout<<"this number is a huiwen\n";
  else
    cout<<"this number is not a huiwen\n";
   return 0;
}
