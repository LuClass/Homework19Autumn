#include<iostream>
#include <math.h>
/*
 *黄海浪 9181040G0818
 *2019.11.15
 *第 14 次作业
 */
using namespace std;

struct fc {
    bool isSolved=false;
    double x1;
    double x2;
};
struct Point {
    int x,y;
};
struct trian {
    Point a,b,c;
    double per,area;
};
fc f(int a,int b,int c){
    fc tmp;
    if(b*b-4*a*c<0){
        return tmp;
    }
    double deta = sqrt(b*b-4*a*c);
    tmp.x1 = (-b-deta)/2.0/a;
    tmp.x2 = (-b+deta)/2.0/a;
    tmp.isSolved=true;
    
    return tmp;
}

double getDis(Point &t1,Point &t2){
    return sqrt(pow(t1.x-t2.x, 2)+pow(t1.y-t2.y, 2));
}
bool isAng(trian &t){
    double x1 = getDis(t.a, t.b);
    double x2 = getDis(t.a, t.c);
    double x3 = getDis(t.b, t.c);
    if(x1+x2>x3 && x2+x3>x1 && x3+x1>x2){
        t.per = x1+x2+x3;
        double per_2 = t.per/2;
        t.area = sqrt(per_2*(per_2-x1)*(per_2-x2)*(per_2-x3));
        return true;
    }
    return false;
}

int main(){
    {//(1)
        fc t1 = f(1,5,1);
        if(t1.isSolved){
            cout<<"x1:"<<t1.x1<<" x2:"<<t1.x2<<endl;
        }else{
            cout<<"无解"<<endl;
        }
    }
    
    {//(2)
        trian t;
        t.a.x = 0,t.a.y=0;
        t.b.x = 1,t.b.y=0;
        t.c.x = 0,t.c.y=1;
        if(isAng(t)){
            cout<<"周长："<<t.per<<endl;
            cout<<"面积："<<t.area;
        }else{
            cout<<"不是三角形"<<endl;
        }
    }
    return 0;
}
