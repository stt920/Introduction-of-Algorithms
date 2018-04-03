#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;
//����������  2017��12��25��
struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) :
		val(x), left(NULL), right(NULL) {
	}
};

class BST
{
public:
	BST();
	//����
	void InorderTreeWalk(TreeNode* root);
	void PreorderTreeWalk(TreeNode* root);
	void PostorderTreeWalk(TreeNode* root);
	//��ѯ������
	TreeNode* TreeSearch(TreeNode* root, int k);
	TreeNode* IterativeTreeSearch(TreeNode* root, int k);
	bool Find(TreeNode* root, int k);
	//���/��С�ؼ���Ԫ��  2017��12��28��
	TreeNode* TreeMAX(TreeNode* root);
	TreeNode* TreeMIN(TreeNode* root);
	//����x
	TreeNode * TreeInsert(TreeNode* root, int x);//�ݹ�
	TreeNode* TreeInsert2(TreeNode* root, int x);//�ǵݹ�
	//ɾ��x    2017��12��29��
	TreeNode* TreeDelete(TreeNode* root, int x);

	virtual ~BST();
};

