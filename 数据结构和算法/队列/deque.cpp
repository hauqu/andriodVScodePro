/*
利用写过的 双向 链表实现

*/
#include"deuqe.h"
#include<iostream>
using namespace std;
int main(int argc,char *argv[])
{
    deque test;
    for(int i=0;i<10;i++)
    {
        test.push(i);
    }cout<<endl;
    
    
  	while(!test.empty()){
    cout<<endl<<test.pop();
      }

    cout<<"执行完毕"<<endl;
    return 0;
}