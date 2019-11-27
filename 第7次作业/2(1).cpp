using namespace std;
#include <iostream>
int main()
{
	int x,n,y;
	cin>>x;
	switch(n=x/100000)
	{
		case 0: y=0.1*x;break;
		case 1: y=0.075*(x%=100000)+10000;break;
		case 2: y=0.050*(x%=100000)+17500;break;
		case 3: y=0.050*(x%=100000)+22500;break;
		case 4: y=0.030*(x%=100000)+27500;break;
		case 5: y=0.030*(x%=100000)+30500;break;
		case 6: y=0.015*(x%=100000)+33500;break;
		case 7: y=0.015*(x%=100000)+35000;break;
		case 8: y=0.015*(x%=100000)+36500;break;
		case 9: y=0.015*(x%=100000)+38000;break;
		default:y=0.010*(x%=100000)+29500+1000*n;
	}
	cout<<y;
	return 0;
}
