using namespace std;
#include <iostream>
main()
{
  int i,j,result;
  cout<<endl;
  for (i=1;i<10;i++)
  {
    for(j=1;j<10;j++)
    {
      result=i*j;
	  cout<<i<<"*"<<j<<"=";
	  cout.setf(std::ios::left);//左对齐 
	  cout.width(3);//三位输出 
	  cout<<result;
    }
    cout<<endl;; /*每一行后换行*/
  }
  cin.get();
}
