#include<iostream>
using namespace std;

int getSet(int rs[], const int a[], int n) {
	rs[0]=a[0];	//�����ȸ�ֵ 
	int count=1;	//������1��ʼ 
	for(int i=1;i<n;i++){
		bool isEqual=false;		//�ж���� 
		for(int j=0;j<count;j++){	//�Ե�ǰrs�����������a[i]�Ƚ� 
		if(rs[j]==a[i])
		isEqual=true;
		}
		if(!isEqual){
			rs[count]=a[i];//û����ȵ���Ͱѵ�ǰa[i]����rs���һ�� 
			count++;	//�������� 
		}
	}
	for(int i=0;i<count;i++)
		cout<<rs[i]<<' '; //���rs 
	cout<<endl;
	return count;//���ؼ��� 
} 

//���� 
int main(){
	int a[]={3, 1, 2, 3, 1, 5, 2, 1};
//	int a[]={1,1,2,2,3,3,4,4,4,5,6,7};
	int rs[8];
	int n=8;
	cout<<getSet(rs,a,n);
} 
