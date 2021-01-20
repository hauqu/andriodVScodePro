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
        cout<<i<<" ";
    }cout<<endl<<"入队"<<endl;
    
    
  	while(!test.empty()){
    cout<<" "<<test.pop();
      }
		cout<<endl<<"出队"<<endl;
    cout<<"执行完毕"<<endl;
    return 0;
}