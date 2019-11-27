using namespace std;
#include <iostream>
int main()
{
	enum examways{
	    percentile,
	    hierarchy
    };
    union coursegrade{
	    float num;
	    char level;
    };
    struct student{
	    char a[10];
	    char name[5];
	    char sum[20];
	    coursegrade b;
    }; 
    struct Course{
	    char numbering[20];
	    char coursename[10];
	    examways c;
    };
    return 0;
}


