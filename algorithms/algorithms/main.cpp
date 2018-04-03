#include<iostream>
#include<algorithm>
#include "Sort.h"
#include "Others.h"
#include "LinkedList.h"
#include "BST.h"
void PrintAns(vector<int> A)
{
	int sizes = A.size();
	for (int i = 0; i < sizes; i++)
		cout << A[i] << " " ;
	cout << endl;
}
void main()
{
	/*--------------------------------------ÅÅÐò²âÊÔ---------------------------------------------------*/
	//Sort s; 
	//vector<int> A = {4,9,3,2,1,5,8,11,12,13,14,5,3};
	//vector<int> b={13, -3, -25, 20, -3, -16, 5, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7,101,-55,8};
	//vector<int> c = { 16,4,10,7,2,9,3,14,8,1 };
	//PrintAns(A);
	//s.InsertSort(A);
	//s.MergeSort(A,0,11);
	//Others s;
	//×î´ó×ÓÊý×é²âÊÔ
	//int f = s.FindMaxSubarray(b);
	/*int a = s.FindMaxSubarray2(b,0,6);*/
	//int a = s.FindMaxSubarray_(b);
	//cout <<f <<" "<< a;
	//¶ÑÅÅÐò²âÊÔ
	//s.MaxHeapify(c,0);
	//s.BuildMaxHeap(A);
	//s.HeapSort(b);
	//Ã°ÅÝÅÅÐò
	//s.BubbleSort(b);
	//¿ìËÙÅÅÐò
	//s.QuickSort(b);
	//¼ÆÊýÅÅÐò
	//vector<int> B;
	//s.CountSort(A, B,20);
	//shellÅÅÐò
	//s.ShellSort(A);
	//PrintAns(A);
	/*--------------------------------------µ¥Á´±í²âÊÔ---------------------------------------------------*/
	//LinkedList s;
	//struct LinkedList::ListNode *head;
	//head=s.CreatList();
	//s.PrintList(head);
	//cout << endl;
	//head=s.Delete(head);	
	//head = s.DeleteAll(head);
	//head = s.Insert(head, 5, 22);
	//cout << endl;
	//s.PrintList(head);
	//sort(A.begin(), A.end());
	//PrintAns(A);
	//cout<<s.HalfSearch(A,114);
	/*--------------------------------------¶þ²æËÑË÷Ê÷²âÊÔ---------------------------------------- ------*/
	//TreeNode * root = new TreeNode(6);         //                               
	//root->left = new TreeNode(2);              //                               6   
	//root->right = new TreeNode(8);             //                              / \    
	//root->right->right = new TreeNode(9);      //                             2   8                                              
	//root->left->left = new TreeNode(1);        //                            / \   \     
	//root->left->right = new TreeNode(4);       //                           1   4   9
	//root->left->right->left = new TreeNode(3); //                              /
	//BST tree;                                  //                             3   
	//TreeNode * root2=tree.TreeSearch(root,2);//
	//TreeNode * root2 = tree.IterativeTreeSearch(root, 8);
	//cout << tree.Find(root, 0) << endl;
	//TreeNode * root2 = tree.TreeMAX(root);
	//TreeNode * root2 = tree.TreeMIN(root);
	//TreeNode * root2 = tree.TreeInsert2(root, 9);
	//TreeNode * root2 = tree.TreeDelete(root,3);
	//tree.InorderTreeWalk(root2); cout << endl;
	//tree.PreorderTreeWalk(root2); cout << endl;
	//tree.PostorderTreeWalk(root2); cout << endl;
	/*--------------------------------------ºìºÚÊ÷²âÊÔ---------------------------------------- ------*/
}