#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;
//链表 数据结构与算法分析 ——c语言描述  2017年12月23日
class LinkedList
{
public:
	LinkedList();
	struct ListNode
	{
		int val;
		struct ListNode *next;

	};
	//创建单链表
	ListNode *CreatList();
	//单链表遍历
	void PrintList(ListNode *head);
	//测试单链表是否为空
	int IsEmpty(ListNode *head);
	//测试当前位置是否链表末尾
	int IsLast(ListNode *head);
	//删除指定first元素
	ListNode *Delete( ListNode *head);
	//指定位置插入元素
	ListNode *Insert(ListNode *head, int pos, int val);
	//删除指定all元素
	ListNode *DeleteAll(ListNode *head);

	virtual ~LinkedList();
};

