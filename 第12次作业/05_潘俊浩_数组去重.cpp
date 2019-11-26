#include<iostream>
using namespace std;
int getSet(int rs[],const int a[],int n){
    for (int i = 0; i < sizeof(a); i++)
    {
        int j = 0;
        for (; j < n; j++)
        {
            if (a[i] == rs[j])
                break;
        }
 
        if (j == n)
        {
            rs[n] = a[i];
            n++;
        }
    }
    return n;
} 
int getSet2(int rs[][8],const int a[],int n){
    for (int i = 0; i < sizeof(a); i++)
    {
        int j = 0;
        for (; j < n; j++)
        {
            if (a[i] == rs[0][j]){
            	rs[1][j]++;
            	break;
			}
        }
 
        if (j == n)
        {
            rs[0][n] = a[i];
            rs[1][n] = 1;
            n++;
        }
    }
    return n;	
}
void paixu(int rs[][8],int n){
	int i, j, temp1,temp2;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1-i; j++)
			if(rs[1][j] < rs[1][j+1]){
				temp2 = rs[1][j]; 
				rs[1][j] = rs[1][j+1]; 
				rs[1][j+1] = temp2;
				temp1 = rs[0][j]; 
				rs[0][j] = rs[0][j+1]; 
				rs[0][j+1] = temp1;
			}
	
}
int main()
{
	int n = 0;
	int a[] = {3,1,2,3,1,5,2,1};
	int rs[8];
	int rs2[2][8];
	int m = getSet(rs,a,n);
	cout << m <<endl;
	for(int i=0;i<m;i++){
		cout << rs[i]<<' '; 
	}
	cout << endl;
	int t = getSet2(rs2,a,n);
	for(int i=0;i<t;i++){
		cout << rs2[0][i]<<' '<<rs2[1][i]<<endl; 
	}
	paixu(rs2,t);
	for(int i=0;i<t;i++){
		cout << rs2[0][i]<<':'<<rs2[1][i]<<endl; 
	}	

    return 0;
 }

