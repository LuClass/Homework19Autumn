using namespace std;
#include <iostream>
int main()
{
  char a[50];
  cin.getline(a,50);
  for(int j=0;a[j];j++)
  {
 	cout<<a[j];
  }
  cout<<endl;
  for(int i=0;a[i];i++)
  {
 	if(a[i]>='A'&&a[i]<='Z')
 	{
 		a[i]=a[i]+32;
 		cout<<a[i];	
 	}
 	else
 	    cout<<a[i];
  }
  return 0;
}
