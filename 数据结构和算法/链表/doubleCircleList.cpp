/*
测试循环双链表

*/
#include<iostream>
#include"doubleCircleList.h"
using namespace std;
int main(int argc,char*argv[])
{
    doubleCircleList test;
   
    for (int i = 0; i < 10; i++)
    {
        test.push(i);
    }
     cout<<"size:"<<test.size()<<endl;
    node *temp = test.root;
    for(int i =0;i<100;i++)
    {
        temp =temp->last;
        cout<<temp->data<<" ";
        if(i%10==0)
        cout<<endl;
    }
    for(int i=0;i<5;i++)
    {
        cout<<" "<<test.pop()<<endl;
    }
    return 0;
}