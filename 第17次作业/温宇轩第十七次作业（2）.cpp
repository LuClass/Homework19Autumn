#include <bits/stdc++.h>
using namespace std;

int main(int argv,string** argc[]){
    sort(argc,argc+argv);
    for(int i=0;i<argv;i++){
        cout<<argc[i]<<endl;
    }

    return 0;
}
