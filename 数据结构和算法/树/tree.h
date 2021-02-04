/*
一个带根节点的二叉树

*/
#include<iostream>
using namespace std;
class node
{
 public:
 	 int data;
      node* left;
      node* right;
	
};

class BiTree{

    public:
    
    node* root;
    BiTree(int *a,int n);//根据一个数组生成一个完美二叉树
 	BiTree(int*a,int s,node* r);//使用递归的方法生成一棵树,为层数
	    
    //可以使用完美二叉树初始化一棵树，不存在的节点为特殊值
    void preorder(node*r);//先序遍历
};

BiTree::BiTree(int *a,int n)
{
    int temp =n+1;
    int s =0;
    while(temp!=1)
    {
        temp =temp /2;
        s++;
    }


}


/*
 	1
2        3

45       67


满二叉树的节点数n 1  3 7 

层数          s 1  2 3

可得关系  n = 2^s-1



*/
BiTree::BiTree(int *a,int s,node*r)
{
    static int i =0;
    if(i==s) return ;
	r->data =a[i];
    i++;
    BiTree(a,s,r->left);
    BiTree(a,s,r->right);
}



void BiTree::preorder(node*r)
{
    if(r==nullptr)
    	return ;
	cout<<r->data<<" ";
 	preorder(r->left);
    preorder(r->right);   
}