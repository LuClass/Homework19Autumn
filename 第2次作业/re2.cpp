// 23. if(x>2&&x%2==0)
// 24. if(x>8||x<-8)
// 25
// A. 0  B.0.333333333 C.1 D.7
// 26
// A.4  B.27 C.8 D.729
// 27
// A.true B.true C.31 D.flase
// 28
#include<stdio.h>
int main()
{
    float centigrade;
    printf("please input centigrade:\n");
    scanf("%f",&centigrade);
    getchar();
    printf("ok! now i tell you that\n");
    printf("%f centigrade degrees transform to Fahrenheit is %f\n",centigrade,centigrade*9/5+32);
    printf("and the  Kelvin  degrees is %f",centigrade+273.15);
    getchar();
    return 0;
}