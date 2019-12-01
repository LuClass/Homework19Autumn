#include<iostream>
using namespace std;
void print2D(int *a[], int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++)
			cout<<a[i][j]<<'\t';
		cout<<endl;	
	}
}
int main(void){ 
int i,j;
	int a[][4]={{1,2,3,4},
			{3,4,5,6},
			{5,6,7,8}};
	int *p1[] = {a[0], a[1], a[2]};
	print2D(p1, 3, 4);
}
