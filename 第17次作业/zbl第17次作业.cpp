1
 #include<iostream>
 #include<string.h>
 using namespace std;
 bool daxie(char a){
 if((a>=65)&&(a<=90))
 return 1;
 else
 return 0;	
 }
 void change(char*a)
 {
 int i;
 for(i=0;i<strlen(a);i++)
 {if(daxie(a[i])==1)
 a[i]=a[i]+32;	
 }	
 }
 int main(){
 	int i;
 	char *a;
 	cin.getline(a,100);
 	change(a);
         cout<<a;	

 }
 2
 #include<iostream>
 #include<string>
 using namespace std;
 void bubbleSort(char * strs[], int n) {
 	char *temp;
 	for (int i = 0; i < n - 1; i++) {
 		for (int j = 0; j < n - i - 1; j++) {
 			if (strcmp(strs[j], strs[j + 1]) > 0) {
 				temp = strs[j];
 				strs[j] = strs[j + 1];
 				strs[j + 1] = temp;
 			}
 		}
 	}
 }
 int main(int argc, char* argv[]) {
 	bubbleSort(argv, argc);
 	for (int i = 0; i < argc; i++) {
 		cout << argv[i] << endl;
 	}
 	return 0;
 }
