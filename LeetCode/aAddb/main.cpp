#include<iostream>
#include<list>
using namespace std;
/*

用链表表示非负整数 ，定义两个整数的加法
链表头部储存最高位
*/
using namespace std;

list<unsigned short>n1;
list<unsigned short>n2;


int main(int arg,char *argv[])
{
    
    cout<<"两个链表相加"<<endl;
    n1.push_back(1);
    n1.push_back(1);
    n1.push_back(1);
    n1.push_back(8);
    n2.push_back(2);
    

    //补齐位数
    int s1 =n1.size();
    int s2 =n2.size();
    if(s1>s2)
    {
        for(int i =0;i<s1-s2;i++)
        {
            n2.push_front(0);
        }
    }else if(s2>s1)
    {
        for(int i =0;i<s1-s2;i++)
        {
            n1.push_front(0);
        }
    }
    //对位相加
    list<unsigned short>n3;
    
   auto j = n1.begin();
   auto k =n2.begin();

   for(int i=0;i<n1.size();i++)
   {
       n3.push_back((*j)+(*k));
       cout<<n3.back()<<endl;
       j++;k++;
       
   }
   n3.push_front(0);
    auto p = n3.end();
    bool falg=false;
    while(p!=n3.begin())
    {
        p--;
        if(falg)
        {
          (*p)++;
          falg =false;
        }
        if(*p>9)
        {
          *p-=10;
          falg =true;
        }
    }
    if(n3.front()==0)
     n3.pop_front();
    for(auto i =n3.begin();i!=n3.end();i++)
    {
		cout<<(*i)<<" ";
    }cout<<endl;
    return 0;
}