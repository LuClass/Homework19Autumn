#include <iostream>
using namespace std;

char * trim(char * str){
    char *tail = str;
    char *next = str;

    while(*next){
        if(*next != ' '){
            *tail = *next;
            tail++;
        }
        next++;
    }
    *tail='\0'; // ×Ö·û´®½áÊø
    return str;
}

int main(){

    char str[50]=" that   is      interesting";
    char *p=trim(str);
    cout << p << endl;

    return 0;
}
