#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;
//二叉搜索树  2017年12月25日
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
	//遍历
	void InorderTreeWalk(TreeNode* root);
	void PreorderTreeWalk(TreeNode* root);
	void PostorderTreeWalk(TreeNode* root);
	//查询二叉树
	TreeNode* TreeSearch(TreeNode* root, int k);
	TreeNode* IterativeTreeSearch(TreeNode* root, int k);
	bool Find(TreeNode* root, int k);
	//最大/最小关键字元素  2017年12月28日
	TreeNode* TreeMAX(TreeNode* root);
	TreeNode* TreeMIN(TreeNode* root);
	//插入x
	TreeNode * TreeInsert(TreeNode* root, int x);//递归
	TreeNode* TreeInsert2(TreeNode* root, int x);//非递归
	//删除x    2017年12月29日
	TreeNode* TreeDelete(TreeNode* root, int x);

	virtual ~BST();
};

