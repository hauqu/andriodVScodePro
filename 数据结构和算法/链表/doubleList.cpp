#include"doubleList.h"
#include<iostream>
using namespace std;

doubleList test;
int main(int argc,char *argv[])
{

    for(int i =0;i<10;i++)
    {
        test.push_back(i);
    }

    node* temp =test.head->next;
    while(temp!=nullptr)
    {
        cout<<" "<<temp->data;
        temp =temp->next;
    }
    return 0;
}