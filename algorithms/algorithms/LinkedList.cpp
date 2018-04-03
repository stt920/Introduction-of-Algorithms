#include "LinkedList.h"



LinkedList::LinkedList()
{
}

LinkedList::ListNode * LinkedList::CreatList()
{
	int len;
	cout << "Enter list length:"; 
	cin >> len;
	if (len == 0) {
		cout << "error enter";
		return NULL;
	}
	ListNode *head;
	ListNode  *pre,*p;
    head = (ListNode*)malloc(sizeof(ListNode));
	head->next = NULL;
	pre = head;
	cout << "Enter list val:";
	for (int i = 0; i < len; i++) {
		p = (ListNode*)malloc(sizeof(ListNode));
		cin >> p->val;
		if (i == 0)
			pre->val = p->val;
		else {
			pre->next = p;
			p->next = NULL;
			pre = p;
		}
	}
	return head;

}

void LinkedList::PrintList(ListNode * head)
{
	if (head == NULL)
		return ;
	else {
		while (head != NULL) {
			cout << head->val << "=>";
			head = head->next;
		}
	}
	cout << "END" << endl;
}

int LinkedList::IsEmpty(ListNode * head)
{
	return head->next == NULL;
}

int LinkedList::IsLast(ListNode * head)
{
	return head->next==NULL;
}

LinkedList::ListNode * LinkedList::Delete(ListNode * head)
{
	int x;
	if (head==NULL) {
		cout << "List empty";
		return NULL;
	}
	cout << "Enter Delete element:"; 
	cin >> x;
	ListNode *p = head;
	if (head->val == x)
	{
		head = head->next;
		return head;
	}
	while (p->next != NULL&&p->next->val != x)//找到要删除元素前一个位置
		p = p->next;
	ListNode *tmp=p->next;
	p->next = tmp->next;
	free(tmp);
	return head;
}

LinkedList::ListNode *LinkedList::Insert(ListNode * head, int pos, int val)
{
	ListNode *p = head; int len = 0;
	ListNode *tmp = (ListNode*)malloc(sizeof(ListNode));
	tmp->val = val;
	while (p!=NULL){
		len++;
		p = p->next;
	}
	if (pos<1 || pos>len) {
		cout << "ni sibusi sha" << endl;
		return head;
	}
	ListNode *p_last = p;
	p = head;
	if (pos == 0)
	{
		tmp->next = head;
		return tmp;
	}
	else
	{
		for (int i = 1; i < pos; i++) {
			p = p->next;
		}
		tmp->next = p->next;
		p->next = tmp;
	}
	return head;
}

LinkedList::ListNode * LinkedList::DeleteAll(ListNode * head)
{
	int x;
	if (head == NULL) {
		cout << "List empty";
		return NULL;
	}
	cout << "Enter Delete element:";
	cin >> x;
	while (head!=NULL&&head->val == x){
		ListNode *tmp =head;
		head = head->next;
		free(tmp);
	}
	if (head == NULL) {
		cout << "empty list";
		return head;
	}
	ListNode *p = head;
	while (p->next != NULL) {
		if(p->next->val != x)
			p = p->next;
		else{
			ListNode *tmp = p->next;
			p->next = tmp->next;
			free(tmp);
		}
		
	}
	return head;
}

LinkedList::~LinkedList()
{
}
