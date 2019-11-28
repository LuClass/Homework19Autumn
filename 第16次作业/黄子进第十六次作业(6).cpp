#include<iostream>
#include<string.h>
using namespace std;
main()
{
	char a[10][20];
	int count[10] = {1,1,1,1,1,1,1,1,1,1};
	int n,temp;
	char tem[20];
	cin>>n;
	cin.get();
	for(int i = 0;i<n;i++)
	cin.getline(a[i],20);
	for(int x = 0;x < n;x++) 
		for(int y = 0;y < n;y++)
			if(count[x]&&count[y]&&!strcmp(a[x],a[y])&& x != y)
			{
				count[x]++;
				count[y] = 0;
			}
	for(int x = 0;x < n;x++)
		for(int y = 0;y < n - x - 1;y++)
			if(count[y]<count[y+1])
			{
				temp = count[y+1];
				count[y+1] = count[y];
				count[y] = temp;
				strcpy(tem,a[y+1]);
				strcpy(a[y+1],a[y]);
				strcpy(a[y],tem);
			}
	cout << endl;
	for(int x = 0;count[x];x++)
	cout<<count[x]<<' '<<a[x]<<endl;
}
