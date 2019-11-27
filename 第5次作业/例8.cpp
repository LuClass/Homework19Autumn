using namespace std;
#include <iostream>
#include <iomanip>
int main()
{
  int i,j,result;
  cout<<endl;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
      cout<<i<<"*"<<j<<"="<<setiosflags(ios::left)<<setw(3)<<result; /*-3d表示左对齐，占3位*/
    }
    cout<<endl; /*每一行后换行*/
  }
  return 0;
}
