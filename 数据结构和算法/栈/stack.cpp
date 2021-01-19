#include<iostream>
#include"stack.h"
using namespace std;

int main(int argc,char*argv[])
{
    stack test;
    for(int i=0;i<10;i++)
    {
        test.push(i);
        cout<<" "<<i;
    }cout<<endl;
	
    for(int i=0;i<3;i++)
    {
    	cout<<" "<<test.pop();    
    }cout<<endl;
	
    
    cout<<endl;
    

    cout<<"执行完毕"<<endl;
    return 0;

}