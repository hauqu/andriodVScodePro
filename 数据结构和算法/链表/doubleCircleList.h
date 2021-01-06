/*
带头节点，尾节点，根节点点 双向循环链表

*/

class node
{
    public:
	int data;
    node* last;
    node *next;
};

class doubleCircleList
{
	node* root;//一个访问入口
    node* head;
    node* tail;
    doubleCircleList();
    int pop();
    int push();

};
doubleCircleList::doubleCircleList()
{
    root = new node;
    head = new node;
    tail = new node;

    root->data =0;
    head->data =0;
    tail->data =0;

    head->next = root;
    root->next = tail;
    tail->next = head;
    
    head->last =tail;
    root->last =head;
    tail->last =root;
}

