#include<iostream>
#include <cstdlib>
#include <ctime>
#include<math.h>
/*
 *黄海浪 9181040G0818
 *2019.11.07
 *第 10 次作业
 */
using namespace std;

void getRandom(int a[],unsigned int n){
    srand((unsigned int)time(NULL));
    for(int i=0;i<n;++i){
        a[i]=rand()%100;
    }
}
int getMax(int a[],unsigned int n){
    int maxx = 0;
    for(int i=0;i<n;++i){
        if(a[maxx]<a[i])
            maxx = i;
    }
    return maxx;
}
bool isPrime(int n){
    if(n==2||n==3) return true;
    if(!(n%2)) return false;
    int x = sqrt(n)+1;
    for(int i=3;i<x;i+=2){
        if(!(n%i)) return false;
    }
    return true;
}
int getSumn(int n){
    int sum=0;
    while (n) {
        sum += n%10;
        n/=10;
    }
    return sum;
}
bool isSmith(int n){
    if(isPrime(n)||!n) return false;
    int i=2,sum=getSumn(n);
    while(n){
        if(!(n%i)){
            sum -= getSumn(i);
            n/=i;
            continue;
        }
        do{
            i++;
        }while (!isPrime(i));
        if(i>n) break;
    }
    if(!sum) return true;
    else return false;
}

//别人的公式求解
int cir(int n,int m)
{
    int p=0;
    for(int i=2;i<=n;i++)
    {
        p=(p+m)%i;
    }
    return p+1;
}

int main(){
    {//T14(2)
        int arr[10];
        getRandom(arr, 10);
        cout<<getMax(arr, 10)<<endl<<endl;
    }
    {//T14(5)
        int n = 4937774;
        while(!isSmith(n)){
            ++n;
        }
        cout<<n<<endl<<endl;
    }
    {
        //T14(10)
        //本人解法
        int m = 21,n=5;
        int *arr = new int [m];
        for(int i=0;i<m;++i){
            arr[i]=i+1;
        }
        long long sum = m, i = 1,index = 0;
        while(sum>1){
            if(arr[index%m]!=0){
                if(i==n){
                    arr[index%m] = 0;
                    i=0;
                    --sum;
                }
                ++index;
                ++i;
            }else{
                ++index;
            }
        }
        for(int i=0;i<m;++i){
            if(arr[i]!=0){
                cout<<arr[i]<<endl;
                break;
            }
        }
        //别人公式
        cout<<endl<<cir(21, 5)<<endl;
    }
    return 0;
}
