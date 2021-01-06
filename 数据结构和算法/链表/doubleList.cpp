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

    node* temp =test.head;
    while(temp!=nullptr)
    {
        cout<<" "<<temp->data;
        temp =temp->last;
    }
    return 0;
}