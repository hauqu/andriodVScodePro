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

public:

	node* root;//一个访问入口
    node* head;
    node* tail;
    doubleCircleList();
    int pop();
    node* push(int d);
    int size();

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

node* doubleCircleList::push(int d)
{
    /*
    插入到head 和tail之间
    */
	node *temp = new node ;
    temp->data =d;
    node *hn = head->next;

    hn->last = temp;
    temp->next =hn;

    head->next =temp;
    temp->last =head;

    return temp;

}
int doubleCircleList::pop()
{
    int s =size();
    if(s<=3)
    {
        return 0;
        //不允许删除 三个访问入入口
    }
    node* temp = head->next;
    head->next = temp->next;
    temp->next->last = head;
    int d =temp->data;
    delete temp;
    return d;
}
int doubleCircleList::size()
{
    int n =1;
    node *temp = root->next;
    while(temp!=root)
    {
        temp =temp->next;
        n++;
    }
    return n;
}
