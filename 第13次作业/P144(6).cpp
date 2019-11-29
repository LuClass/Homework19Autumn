#include <iostream>
#include <string.h> 
using namespace std;
int getRev(char a[]){
	int sum=0;
	for (int i=0;i<strlen(a)-1;i++){
		for (int j=i+1;j<=strlen(a)-1;j++)
			if (a[i]>a[j])
				sum++;
	}
	return sum;
}

int main (){
	char a[7];
	cin.getline(a.7);
	cout<<getRev(a)<<endl;
	return 0;
}
