#include<iostream>
/*
 *黄海浪 9181040G0818
 *2019.12.10
 *第 21 次作业
 */
using namespace std;

struct node {
	unsigned num;
	node *next;
};

node * create(unsigned *brr,unsigned long len,unsigned long index = 0) {
	if(index < len) {
		node *t = new node();
		t->num = *brr;
		t->next = create(++brr,len,++index);
		return t;
	} else {
		return NULL;
	}
}
void print(node *p) {
	if(p!=NULL) {
		cout<<p->num<<" ";
		print(p->next);
	}
}

node * del(node *p,unsigned x) {
	node *last = p,*renode = p;
	while(p!=NULL) {
		if(p->num!=x) {
			last = p;
			p = p->next;
		} else {
			if(last == p) {
				renode = p->next;
				last = p->next;
				delete p;
				p = last;
			} else {
				last->next = p->next;
				delete p;
				p = last->next;
			}
		}
	}
	return renode;
}

void destroy(node **p) {
	if(*p!=NULL) {
		destroy( &((*p)->next) );
		delete *p;
		*p = NULL;
	}
}

int main() {
	unsigned long len;
	cin>>len;
	unsigned *brr= new unsigned [len];
	for(int i=0;i<len;++i){
		cin>>brr[i];
	}
	node *p = create(brr,len);
	print(p);
	p = del(p,2);
	cout<<endl;
	print(p);
	destroy(&p);
	print(p);
	return 0;
}
