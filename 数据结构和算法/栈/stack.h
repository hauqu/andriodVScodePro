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
	
};

stack::stack()
{
	
}

bool stack::empty()
{
    if(head->last==nullptr)
    	return true;
    else return false;
}

void stack::push(int d)
{
	push_back(d);
}
int stack::pop()
{
    int d =pop_back();
    return d;
}
