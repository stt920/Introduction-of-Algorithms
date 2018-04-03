#include "BST.h"



BST::BST()
{
}

void BST::InorderTreeWalk(TreeNode * root){
	if (root != NULL) {
		InorderTreeWalk(root->left);
		cout << root->val << " ";
		InorderTreeWalk(root->right);
	}
}
void BST::PreorderTreeWalk(TreeNode* root) {
	if (root != NULL) {
		cout << root->val << " ";
		PreorderTreeWalk(root->left);
		PreorderTreeWalk(root->right);
	}
}
void BST::PostorderTreeWalk(TreeNode* root) {
	if (root != NULL) {
		PostorderTreeWalk(root->left);
		PostorderTreeWalk(root->right);		
		cout << root->val << " ";
	}
}

TreeNode * BST::TreeSearch(TreeNode * root, int k){
	if (root == NULL||k==root->val)
		return root;
	else if (k < root->val) 
		return TreeSearch(root->left,k);
	else  
		return TreeSearch(root->right, k);
}

TreeNode * BST::IterativeTreeSearch(TreeNode * root, int k){
	while (root != NULL&&root->val != k) {
		if (k<root->val)
			root = root->left;
		else
			root = root->right;
	}
	return root;
}

bool BST::Find(TreeNode * root, int k){
	while (root != NULL) {
		if (root->val == k) {
			return true;
		}
		else if (k < root->val)
			root = root->left;
		else if (k > root->val)
			root = root->right;
	}
	return false;
}

TreeNode * BST::TreeMAX(TreeNode * root){
	while (root->right != NULL)
		root = root->right;
	return root;
}

TreeNode * BST::TreeMIN(TreeNode * root){
	while (root->left != NULL)
		root = root->left;
	return root;
}

TreeNode * BST::TreeInsert(TreeNode * root,int x){
	if (Find(root, x)) {
		cout << "exit" << x << "insert fial" << endl;
		return root;
	}
	if (root == NULL) {
		root = new TreeNode(x);
	}
	else if (x < root->val) {
		root->left=TreeInsert(root->left,x);
	}
	else if (x > root->val)
		root->right = TreeInsert(root->right, x);
	return root;
}
TreeNode* BST::TreeInsert2(TreeNode* root, int x)  //数据结构与算法分析——c描述
{
	if (Find(root, x)) {
		cout << "exit " << x << " insert fial" << endl;
		return root;
	}
	TreeNode *tmp = root;
	if (tmp == NULL) {
		tmp = new TreeNode(x);
	}
	TreeNode* p=NULL;
	while (tmp != NULL) {
		if (x < tmp->val){	
			p = tmp;
			tmp = tmp->left;
		}
		else if (x > tmp->val){
			p = tmp;
			tmp = tmp->right;
		}
	}
	if (x > p->val)
		p->right = new TreeNode(x);
	if(x<p->val)
		p->left = new TreeNode(x);
	return root;
}

TreeNode * BST::TreeDelete(TreeNode * root, int x) //数据结构与算法分析——c描述//
{
	TreeNode *tmp;
	if (root == NULL)
		return root;
	else if (x < root->val)
		root->left = TreeDelete(root->left, x);
	else if (x > root->val)
		root->right = TreeDelete(root->right, x);
	else if (root->left&&root->right) {
		tmp = TreeMIN(root->right);
		root->val = tmp->val;
		root->right = TreeDelete(root->right, root->val);
	}
	else {
		tmp = root;
		if (root->left == NULL)
			root = root->right;
		else if (root->right==NULL)
			root = root->left;
		free(tmp);
	}
	return root;
}

BST::~BST()
{
}
