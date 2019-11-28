#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
/*
*黄海浪 9181040G0818
*2019.11.13
*第 12 次作业
*/
using namespace std;
int arr1[100010];
int brr[] = {3,1,2,3,1,5,2,1};
//获取c在a出现次数
int getSumArr(int c,const int a[],int n) {
    int s = 0;
    for(int i =0; i<n; ++i) {
        if(c==a[i]) ++s;
    }
    return s;
}
//sort比较
bool cmp(int a,int b) {
    return getSumArr(a,brr,sizeof(brr)/sizeof(brr[0]) ) > getSumArr(b,brr,sizeof(brr)/sizeof(brr[0]));
}
//转换成set
int getSet(int rs[],const int a[],int n) {
    int s = 0;
    for(int i=0; i<n; ++i) {
        if(!getSumArr(a[i],rs,n)) {
            rs[s++] = a[i];
        }
    }
    return s;
}
//vec_sort
bool cmp_vec(const pair<int,int> &t1, const pair<int,int> &t2) {
    return t1.second>t2.second;
}
int main() {
    {
        //1
        int n = getSet(arr1,brr,sizeof(brr)/sizeof(brr[0]));
        sort(arr1,arr1+n,cmp);
        for(int i=0; i<n; ++i) {
            cout<<arr1[i]<<":"<< getSumArr(arr1[i],brr,sizeof(brr)/sizeof(brr[0]) )<<endl;
        }
    }

    cout<<endl<<"map&vec"<<endl;
    //map+vector/set(注意cmp)
    {
        //2
        map<int,int> mp;
        for(int i =0; i<sizeof(brr)/sizeof(brr[0]); ++i) {
            ++mp[brr[i]];
        }
        vector<pair<int,int> > vec(mp.begin(),mp.end());
        sort(vec.begin(),vec.end(),cmp_vec);
        //或者vec[i]
        for(vector<pair<int,int> >::iterator it = vec.begin(); it!=vec.end(); ++it) {
            cout<<it->first<<":"<<it->second<<endl;
        }
    }
    return 0;
}
