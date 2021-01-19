#include"doubleList.h"

/*
双向链表实现栈
*/


class stack:private doubleList
{

public:
	stack();
	void push(int d);
    int pop();
	bool empty();
private:
	node*root;
};

stack::stack()
{
	root =head;
}

bool stack::empty()
{
    if(root==head)
    	return true;
    else return false;
}

void stack::push(int d)
{
	push_back(d);
    root =root->next;    
}
int stack::pop()
{
    int d =pop_back();
    root =end();
    return d;
}
