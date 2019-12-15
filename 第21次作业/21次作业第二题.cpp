#include<iostream>
using namespace std;
struct node{
unsigned num;
node*next;	
};
void Create(node*&l) {  
    int x;
    l->next = NULL; 
    node*r = l;  
    cin >> x;
    while (x != 0) {
       node*s = new node;
        s->num = x;
        r->next = s;
        r = s;
        cin >> x;
    }
    r->next = NULL;
}
void Print(node *&l) { 
    node *p = l->next;
    while (p != NULL) {
        cout << p->num << " ";
        p = p->next;
    }
    cout << endl;
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



void destroy(node *&l) { 
    node *p = l;
    node *q = l->next;  
    while (p != NULL) {
        delete p;
        p = q;
        if (q != NULL) {
            q = q->next;
        }
    }
}
int main(){int key;
	 node *l = new node;
	 	cout<<"输入0时停止";
	Create(l);
	Print(l);
	cout<<"输入要删除的数"; 
	cin>>key;
l=del(l,key);
    Print(l);
}


