#include<iostream>
#include<vector>
#include<map>
#include<list>
using namespace std;
vector<int>nums ={5,7,9,2,4,24,27,26,11,88};
int target =28;
int len =10;
bool sum1();//暴力枚举
bool sum2();
int *buildHashTable(int n[],int len);
int main()
{
	sum1();
    
    cout<<"支持c11"<<endl;
    return 0;
}

bool sum1()
{
    //时间复杂度 N*N，空间复杂度 1
    bool work=false;;
    for(int i=0;i<len-1;i++)
    {
        for(int j=i+1;j<len;j++)
        {
			if(nums[i]+nums[j]==target)
            {
               //cout<<i<<"   "<<j<<endl;
            	cout<<nums[i]<<"+"<<nums[j]<<"="<<target<<endl;
                work =true;
            }
        }
    }
    if(!work) cout<<"没有找到符合的"<<endl;
    return work;
}
bool sum2()
{
    bool work =false;
    //查找 某一元素是否存在可以使用散列表 ，用空间换时间
    //对于某个x ，则需要在剩余数组中寻找target－x
    
    return work;
}
int *buildHashTable(int n[],int len)
{
    //返回一个hash表，长度为2 len
    // H(k) = n[k] mod len
    //冲突处理，线性探测
	int *hashtable = new int[2*len];
    for(int i=0;i<2*len;i++)
    {
        hashtable[i] =-1;//该值用于判空
    }
    for(int i=0;i<len;i++)
    {
        int k = n[i]% len;
        if(hashtable[k]==-1)
        {
			hashtable[k] =n[i];
        }else 
        {
            //冲突处理
            while(true)
            {
                k++;
                if(hashtable[k]==-1)
                {
                	hashtable[k] =n[i];
                    break;
                }

            }
        }

    }
}
    