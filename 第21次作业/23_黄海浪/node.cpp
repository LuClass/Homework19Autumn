#include<iostream>
/*
 *黄海浪 9181040G0818
 *2019.12.10
 *第 21 次作业
 */
using namespace std;

struct node{
	unsigned num;
	node *next;
};

node * create(unsigned *brr,unsigned long len,unsigned long index = 0){
	if(index < len){
		node *t = new node();
		t->num = *brr;
		t->next = create(++brr,len,++index);
		return t;
	}else{
		return NULL;
	}
}
void print(node *p){
	if(p!=NULL){
		cout<<p->num<<" ";
		print(p->next);
	}
}

void del(node *p,unsigned x){
	node *last = NULL;
	while(p!=NULL){
		if(p->num!=x){
			last = p;
			p = p->next;	
		}else{
			last->next = p->next;
			delete p;
			p = last->next;
		}
	}
}

void destroy(node *p){
	if(p!=NULL){
		destroy(p->next);
		delete p;
	}
}

int main() {
	unsigned brr[]={1,23,4,2,1,2,4,12,12,3,2,2};
	node *p = create(brr,sizeof(brr)/sizeof(brr[0]));
	print(p);
	del(p,2);
	cout<<endl;
	print(p);
	destroy(p);
	return 0;
}
