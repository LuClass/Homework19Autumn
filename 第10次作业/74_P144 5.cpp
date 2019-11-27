#include <iostream>
using namespace std;
bool isprime(int n){
	for (int i=2;i*i<=n;i++){
	if ((n%i)==0)
	return 0; 
	}return 1;
} 
int depart (int m){
	int  num;
	int result=0;
	while (m!=0){
	num=m%10;
	m/=10;
	result+=num;
   }
   return result;
}
int sumzhiyinshu(int s){
	int num2=2;
    int sum=0;
    while (isprime(s)==0){
	while (num2<s){
    	if (s%num2==0&&isprime(num2)==1){
    		sum+=depart(num2);
    		break;}
	    else 
	    num2++;
        }
    	s=s/num2;
		num2=2;
    }
    sum+=depart(s);
    return sum;
}
int  issmith(int n){
    int a,b;
	if (isprime(n)==1){
	cout<<"error,not a smith number\n"<<endl;
	}
	if(isprime(n)==0){
	a=depart(n);
    b=sumzhiyinshu(n);
    if (a==b){
    	cout<<"it is a smith number!\n";
    	return 1;
    }
        cout<<"it is not a smith number!\n";
        return 0;
    }
}
int main(){
    int time=4937774;
    int j=0;
while (j==0){
	time+=1;
	j=issmith(time);
    }
    cout<<time<<endl;
    int i;
    cin>>i;
    issmith(i);
    return 0;
}

