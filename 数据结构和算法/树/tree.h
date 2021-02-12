/*
一颗二叉树

*/
#include<vector>
#include<deque>
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
	void sequenceTraversal(node*r);    
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

void BiTree::sequenceTraversal(node*r)
{
	// 层序遍历一棵二叉树
    deque<node*>t;
    node *p =r;
    t.push_back(p);
    while(t.empty())
    {
        p =t.front();
        cout<<p->data<<" ";
        if(p->left) sequenceTraversal(p->left);
        if(p->right)sequenceTraversal(p->right);
    }

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
/*
             1
    2                3

 4     5         6       7

6 7    8 9      10 11   12 13

层序 1 2 3 4 5 6 7 8 9 10 11 12 13

先序遍历 1 2 4 6 7 5 8 9 3 6 10 11 7 12 13

中序遍历 6 4 7 2 8 5 9 1 10 6 11 3 12 7 13

后序遍历6 7 4 8 9 5 2 10 11 6 12 13 7 3 1
*/