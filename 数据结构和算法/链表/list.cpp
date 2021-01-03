#include<iostream>
#include"singleList.h"
using namespace std;

int main(int argc,char**argv)
{
    cout<<"hello.list"<<endl;

    singleList test;
    for(int i=0;i<10;i++)
    {
        test.push_back(i);
    }
    node*temp =test.head->next;
    while(temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp =temp->next;
    }
    
    cout<<endl;
  	
	cout<<"执行完毕"<<endl;
    return 0;
}
