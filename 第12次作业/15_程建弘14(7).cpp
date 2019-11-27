/*
(7) 一个集合 set 中的各个元素相互之间不相等。 先编写一个函数： 
int getSet(int rs[], const int a[], int n)，从数组 a 中取出相互不等的元素，放入数组 rs 中，并返回 rs 中元素的个数。
此时数组 rs 中各元素都不相等，就构成一个集合 set。
例如： a={3, 1, 2, 3, 1, 5, 2, 1}，那么结果rs={3, 1, 2, 5}，返回 4。先测试验证该函数的正确性。
然后再尝试设计一个函数，不仅能得到集合数组，而且得到集合中各元素出现的次数。
例如上面例子中集合 rs={3, 1, 2, 5}， 其中各元素出现次数分别为{2， 3， 2， 1}。
再设计一个函数， 将集合中的各元素按出现次数降序排序， 最后输出各个元素及其出现次数。 
例如，上面例子输出结果如下：显示格式为“元素值：出现次数”。
1:3
3:2
2:2
5:1
*/
#include<iostream>
using namespace std;
const int maxn=1010;
int hash[maxn]={0};
int getSet(int rs[], const int a[], int n){
	int m=0;
	for(int i=0;i<n;i++){
		if(hash[a[i]]==0){
			hash[a[i]]++;
			rs[m++]=a[i];
		}
		else{
			hash[a[i]]++;
		}
	}
	return m;
}
void print1(int rs[],int n){
	for(int i=0;i<n;i++){
		cout<<rs[i]<<":"<<hash[rs[i]]<<endl;
	}
}
void print2(int rs[],int n){
	for(int i=0;i<n;i++){
		int max=hash[rs[i]];
		for(int j=i;j<n-1;j++){
			if(max<hash[rs[j+1]]){
				int temp=rs[j];
				rs[j]=rs[j+1];
				rs[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<rs[i]<<":"<<hash[rs[i]]<<endl;
	}
}

int main(){
	int a[1010]={3, 1, 2, 3, 1, 5, 2, 1},rs[1010];
	int m1=0,m2=0;
	while(a[m1++]!=0){
		m2++;
	}
	int num=getSet(rs,a,m2);
	cout<<"集合中元素个数："<<num<<endl;
	cout<<"各元素出现次数"<<endl;
	print1(rs,num);
	cout<<"降次排序后，各元素出现次数"<<endl;
	print2(rs,num);
}

  
