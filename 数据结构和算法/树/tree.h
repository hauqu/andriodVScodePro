/*
一个带根节点的二叉树

*/

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
    BiTree();//
 	BiTree(int*a,int n);
    //可以使用完美二叉树初始化一棵树，不存在的节点为特殊值
};