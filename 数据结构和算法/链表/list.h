class node
{
    public:
    int data;
    node*next;
};

class singleList
{
public:
	singleList();
    node*head;
    node*end()const;
    int front();
    int back();
    node*push_back(int data);
    int pop_back();
    ~singleList();
};

node* singleList::end() const
{
    node*temp =head;
    while(temp->next!=nullptr)
    {
        temp =temp->next;
    }
    return temp;
}
node*singleList::push_back(int data)
{
	node* temp = end();
    temp->next = new node;
    temp->next->data =data;	
    temp->next->next =nullptr;
    return temp->next;
}
int singleList::pop_back()
{
   	node* temp =head->next;
    node* l =head;
    int d =0;
    while(temp->next!=nullptr)
    {
        l =l->next;
        temp =temp->next;
    }
  	d =temp->data;
    l->next =nullptr;
    delete temp;  
    return d;

}
int singleList::back()
{
    if(head->next =nullptr)
    	return 0;
    return end()->data;
}
int singleList::front()
{
	if(head->next =nullptr)
    	return 0;
    return head->next->data;
}
singleList::singleList()
{
    head  = new node;
    head->next =nullptr;
    head->data =0;
}
singleList::~singleList()
{

}
