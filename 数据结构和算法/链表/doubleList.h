/*

构建一个双向 链表，带头节点

*/
class node
{
    public:
	int data;
    node* last;
    node *next;
};
class doubleList
{
    public:
    node* head ;
    node* end();
    node*push_back(int data);
    int pop_back();
    int front();
    int back();
    int size();
    doubleList();
    ~doubleList();
};
doubleList::doubleList()
{
    head =new node;
    head->last =nullptr;
    head->next =nullptr;

}
int doubleList::back()
{
    if(head->next==nullptr) return 0;
    return end()->data;
}
int doubleList::front()
{
    if(head->next==nullptr) return 0;
    return head->next->data;
}
node*doubleList::push_back(int data)
{
    node* temp = end();
    temp->next = new node;
    temp->next->data =data;	
    temp->next->next =nullptr;
    temp->next->last =temp;
    return temp->next;
}
node*doubleList::end()
{
     node*temp =head;
    while(temp->next!=nullptr)
    {
        temp =temp->next;
    }
    return temp;
}
int doubleList::pop_back()
{
    //双向链表 出表方法重写
}
int doubleList::size()
{
     node*temp =head;
    int n =0;
    while(temp->next!=nullptr)
    {
        temp =temp->next;
		n++;
    }
    return n;
}
doubleList::~doubleList()
{

  node *tail =end();
  while(tail!=nullptr)
  {
      node*temp =tail;
      tail =tail->last;
      delete temp;
  }


}