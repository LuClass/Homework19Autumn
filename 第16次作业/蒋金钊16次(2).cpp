#include<iostream>
using namespace std;
#include<string.h>
#include<math.h>
int main(){
	char str[100];
	int* a[100];
	int b[100];
	memset(b,0,sizeof(b));
	cin.getline(str,100);
	int num = 0;
	int head=0,rear=0;
	for(int i=0;i<100;i++){
		if(str[i]<='9'&&str[i]>='0'){
			head = i;

			int j = i + 1;

			while (str[j] <= '9' && str[j] >= '0') {
				j++;
			}
			rear = j;
			a[num] = new int[j-i];
			b[num] = j-i;
			for(int j=i,z=0;j<rear;j++,z++){
				(a[num][z]) = str[j] - 48;
			}
			i = rear;
			num++;
		}
	}
	cout<<num<<endl;
	for(int i=0;i<num;i++){
		for(int j=0;j<b[i];j++){
			cout<<(a[i][j]);
		}
		cout<<" ";
	}
	for(int i=0;i<num;i++){
		delete a[i];
	}
	system("pause");
	return 0;
}
 
