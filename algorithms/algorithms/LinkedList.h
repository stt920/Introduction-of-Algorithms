#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;
//���� ���ݽṹ���㷨���� ����c��������  2017��12��23��
class LinkedList
{
public:
	LinkedList();
	struct ListNode
	{
		int val;
		struct ListNode *next;

	};
	//����������
	ListNode *CreatList();
	//���������
	void PrintList(ListNode *head);
	//���Ե������Ƿ�Ϊ��
	int IsEmpty(ListNode *head);
	//���Ե�ǰλ���Ƿ�����ĩβ
	int IsLast(ListNode *head);
	//ɾ��ָ��firstԪ��
	ListNode *Delete( ListNode *head);
	//ָ��λ�ò���Ԫ��
	ListNode *Insert(ListNode *head, int pos, int val);
	//ɾ��ָ��allԪ��
	ListNode *DeleteAll(ListNode *head);

	virtual ~LinkedList();
};

