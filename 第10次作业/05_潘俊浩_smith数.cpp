#include<iostream>
using namespace std;
int weishuhe(int x){
	int a=0;
	while(x!=0){
		a=a+x%10;
		x=x/10;		
	}
	return a;
}
int zhiyingshu(int x){
	int i,a=0;
	while(x!=1){
	for(i=2;i<=x;i++){
		if(x%i==0){
			x=x/i;
			i=weishuhe(i);
            a=a+i;
			break;
		}
	}
    }
     return a;
}
int findsmith(int x){
	int j,a,b;
	for(j=x;j<=5000000;j++){
		a=weishuhe(j);
		b=zhiyingshu(j);
		if(a==b) break;
		
	}
	return j;
}
int main()
{
	int x,a,b;
	cin >> x;
	a = weishuhe(x);
	b = zhiyingshu(x);
	if(a==b) cout <<"yes"<<endl;
	else cout << "no"<<endl;
	cout << findsmith(4937774);

}



