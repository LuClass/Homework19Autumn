#include<iostream>
using namespace std;
struct node
{
	unsigned num;
	node* next;
};
node* create(unsigned n)
{
	node* head = NULL, * rear = NULL;
	unsigned int m;
	for (unsigned i = 0; i < n; i++)
	{
		cin >> m;
		node* p = new node{ m,head };
		if (head == NULL)
		{
			head = p;
			rear = p;
		}
		else
		{
			rear->next = p;
			rear = p;
		}
	}
	rear->next = NULL;
	return head;
}
void print(node* head)
{
	node* head1 = head;
	while (head1 != NULL)
	{
		cout << head1->num << "  ";
		head1 = head1->next;
	}
	cout << endl;
}
void del(node* head)
{
	int m;
	cin >> m;
	node* fore = head, * hind = head;
	while (fore != NULL)
	{
		if (fore->num == m)
		{
			node* p = fore;
			hind->next = fore->next;
			fore = fore->next;
			delete p;
		}
		else
		{
			hind = fore;
			fore = fore->next;
		}
	}
}
void destroy(node* head)
{
	while (head != NULL)
	{
		node* p = head;
		head = head->next;
		delete p;
	}
}
int main()
{
	unsigned n;
	cin >> n;
	node* head = create(n);
	print(head);
	del(head);
	print(head);
	destroy(head);
	return 0;
}