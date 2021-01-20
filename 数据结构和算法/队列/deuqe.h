#include"doubleList.h"

class deque:private doubleList
{
	
public:
	void push(int d);
    int pop();
    deque();
    bool empty();
private:
	node *root;//队尾

};
bool deque::empty()
{
    if(root ==head ) return true;
    else return false;
}
void deque::push(int d)
{
	push_back(d);
    root = end();
}
int deque::pop()
{
	if(root ==head ) return 0;
	int d = head->next->data;
    node*temp =head->next;
    if(temp->next!=nullptr)
    {
    node*temp2 =temp->next;
    temp->last =nullptr;
    temp->next =nullptr;
    delete temp;
    head->next = temp2;
    temp2->last =head;
    }
    else 
    {
    	head->next =nullptr;
        delete temp;
    }
    root =end();
	return d;

}
deque::deque()
{
    root = head;

}