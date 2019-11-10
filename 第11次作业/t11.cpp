#include<iostream>
#include<string.h>
using namespace std;
//2019.11.10
//njust
//this function is for  judge a number is  a Palindrome number or not;
//be careful !!! require input number<=2^31-1
bool JudgePalindromeNumber(int number){
    int ans[20],index=0;
    memset(ans,0,sizeof(ans));
    number<0?abs(number):number;
    do{
        ans[index++]=number%10;
        number/=10;
    }while(number);
    for(int i=0;i<=index/2;i++)
        if(ans[i]!=ans[--index])
            return false;
    return true;
}

//this function is for  judge a number is a Narcissistic Number   or not;
bool JudgeNarcissisticNumber(int number){
    int sum=0;
    do{
        sum+=(number%10)^3;
        number/=10;
    }while(number);
    return number==sum;
};

//this function is for  judge a number is a Perfect Number   or not
bool JudgePerfectNumber(int number){
    int sum=0;
    for(int i=0;i<=number/2;i++)
        if(number%i==0)
            sum+=i;
    return sum==number;
}


int main(){
    
    int pali_number,begin_narciss_number,end_narciss_number,begin_perfect_number,end_perfect_number;

    //Palindrome number
    cin>>pali_number;
    JudgePalindromeNumber(pali_number);
    
    //Narcissistic Number
    cin>>begin_narciss_number>>end_narciss_number;
    for(;begin_narciss_number<=end_narciss_number;)
        if(JudgeNarcissisticNumber(begin_narciss_number++))
            cout<<begin_narciss_number-1<<endl;

    //Perfect Number
    cin>>begin_perfect_number>>end_perfect_number;    
    for(;begin_perfect_number<=end_perfect_number;)
        if(JudgePerfectNumber(begin_perfect_number++))
            cout<<begin_perfect_number-1<<endl;

}