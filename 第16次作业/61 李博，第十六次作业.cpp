?��include< iostream>
��include< string.h>
using namespace std ;

void  bubbleSort��char * strs []��int n��{		
	char * temp;
	for��int i = 0 ; i <n- 1 ; i ++��				
		for��int j = 0 ; j <ni- 1 ; j ++��
			if��strcmp��strs [j]��strs [j + 1 ]��> 0��{
				temp = strs [j];				
				strs [j] = strs [j + 1 ];
				strs [j + 1 ] = temp;
			}
}

void  numSort��char * strs []��int n��{
	int * num = NEW int [n]��
	for(int i = 0 ; i<n; i ++��{
		num [i] = 0 ;
		for��int j = 0 ; j <n; j ++��
			if��strcmp��strs [i]��strs [j]��== 0��
				num [i] ++;
	}
	char * temp;
	for��int i = 0 ; i <n- 1 ; i ++��
		for��int j = 0 ; j <ni- 1 ; j ++��
			if��num [j] <num [j + 1 ]��{
				temp = strs [j];				
				strs [j] = strs [j + 1 ];
				strs [j + 1 ] = temp;
				change��num [j]��num [j + 1 ]��;
			}
}
void int��char * str1 []��int n��{
	char * str0 = NEW char [ 20 ];
	for��int i = 0 ; i <n; i ++��{
		cout << ������ڡ� << i + 1 << �����ַ������� << endl;
		cin.getline��STR0��20��;
		STR1 [I] = NEW char [ strlen��STR0��+ 1 ];
		strcpy��str1 [i]��str0��;
	}
}

void out��char * str1 []��int n��{
	for��int i = 0 ; i <n; i ++��
		cout << str1 [i] << endl;
}

int  main����{
	int n;
	cout << ������n��n> 2������ ;
	cin >> n; cin.get����;
	char * str [ 10 ];
	cin��str��n��;
	cout << endl;
	cout << �����ֵ������У��� << endl;
	bubbleSort��str��n��; //�ֵ���ð������
	cout��str��n��;
	cout << �� ********************* �� << endl;
	cout << �����ַ������ִ������򣺡� << endl;
	numSort��str��n��;
	cout��str��n��;


} 
 
��include< iostream>
��include< string.h>
using namespace std ;

int  main����{
	char * str = NEW char [ 100 ];
	cout << ������һ���ַ��������� << endl;
	cin.getline��str��100��;
	int num = 0��count = 0 ;
	int numArr [ 50 ] = { 0 };
	for��int I = 0 ; strlen��str��+ 1 ; i ++��{
		if��str [i]> = ' 0 ' && str [i] <= ' 9 '��{
			num = num * 10 +��int��str [i] -48 ;	//�ַ�0 ASCII��Ϊ48
		}
		else if������str [i]> = ' 0 ' && str [i] <= ' 9 '��
				 &&����str [i + 1]> = ' 0 ' && str [i + 1]<= ' 9 '��
				 || str [i + 1 ] == ' \ 0 '����{
			numArr [count ++] = num;
			num = 0 ;
		}
	}
	cout << ���������ǣ��� << count << endl;
	cout << ���ֱ��ǣ��� << endl;
	for��int i = 0 ; i <count; i ++��
		cout << numArr [i] << '  ' ;
}
