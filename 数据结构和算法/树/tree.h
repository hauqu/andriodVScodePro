/*
一颗二叉树

*/
#include<vector>
#include<iostream>
using namespace std;
class node
{
 
public:
	int data;
    node* left;
    node* right;
public:
	node(int d):
    	data(d),
        left(nullptr),
        right(nullptr)
        {

        }
    node():
    	data(0),
        left(nullptr),
        right(nullptr)
        {

        }
    node(int d,node*l,node *r):
    	data(d),
        left(l),
        right(r)
        {

        }
public:
	virtual ~node(){}
    

};
class BiTree
{
 
 public:
	node *root;//二叉树的访问入口，一个平平无奇的根节点

 public:
	BiTree():
     root(nullptr)
     {
         //一棵空的二叉树
     }
    
    BiTree(node*r):
    	root(r)
        {

        }
    	
 public:
	BiTree(vector<int>&arr);//利用数组生成一棵二叉树
 
 public:
    void preorderTraversal(node *r);
    void inorderTraversal(node *r);
    void postorderTraversal(node *r);
    
 public:
	int size(node *root);
 
 public:
	
	node* creatTree(vector<int>&arr,node*r);

};

BiTree::BiTree(vector<int>&arr)
{
	//
    root = creatTree(arr,root);
}

void BiTree::preorderTraversal(node *r)
{
    //递归的方法先序遍历
	if(r==nullptr) 
    {
      cout<<endl<<"叶子";
        return ;
    }

    cout<<r->data<<" ";

    preorderTraversal(r->left);
    preorderTraversal(r->right);
}

node* BiTree::creatTree(vector<int>&arr,node*r)
{
 	static int i =-1;
    if(arr[++i]==-1) return nullptr ;

    r = new node(arr[i]);
    r->left = creatTree(arr,r->left);
	r->right = creatTree(arr,r->right);
	return r;
}