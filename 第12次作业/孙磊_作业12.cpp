#include<iostream>
using namespace std;

bool isEqual(int rs[], int n, int num){		//�ж�����Ԫ����һ�������Ƿ���� 
	for(int i=0;i<n;i++){
		if(rs[i]==num)
		return true;
	}
	return false;
}

int getSet(int rs[], const int a[], int n) {
	rs[0]=a[0];	//�����ȸ�ֵ 
	int count=1;	//������1��ʼ 
	for(int i=1;i<n;i++){
		if(!isEqual(rs, count, a[i])){
			rs[count]=a[i];//û����ȵ���Ͱѵ�ǰa[i]����rs���һ�� 
			count++;	//�������� 
		}
	}
	return count;//���ؼ��� 
} 

void getSet2(int rs[], const int a[], int n) {
	int count=getSet(rs, a, n);		//����getSet()���� 
		for(int i=0;i<count;i++){
			int num=0;
			for(int j=0;j<n;j++){
				if(a[j]==rs[i]) num++;	//ÿ����һ����ȣ�num����һ�� 
			}
			cout<<num<<' ';
	}
	cout<<endl;
}

void getSet3(int rs[], const int a[], int n) {
	int count=getSet(rs, a, n);		//����getSet()���� 
	int num[count];		//����һ��num���� 
	for(int i=0;i<count;i++){
		num[i]=0;
		for(int j=0;j<n;j++){
			if(a[j]==rs[i]) num[i]++;
		}
	}
	for(int i=0;i<count;i++){
		for(int j=i;j<count;j++){
			if(num[i]<num[j]){		//ͨ��ð������ͬʱ��rs��num������������ 
				int tmp1=num[i], tmp2=rs[i];
				num[i]=num[j];	rs[i]=rs[j];
				num[j]=tmp1;	rs[j]=tmp2;
			} 
		}
	}
	for(int i=0;i<count;i++){
		cout<<rs[i]<<':'<<num[i]<<endl;		//����ʽ��� 
	}
}
//���� 
int main(){
	int a[]={3, 1, 2, 3, 1, 5, 2, 1};
//	int a[]={1,1,2,2,3,3,4,4,4,5,6,7};
	int rs[8];
	int n=8;
	cout<<getSet(rs,a,n)<<endl;
	getSet2(rs,a,n);
	getSet3(rs,a,n);
} 
