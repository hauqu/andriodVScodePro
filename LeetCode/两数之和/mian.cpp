#include<iostream>
using namespace std;
int nums[10]={5,7,9,2,4,24,27,26,11,88};
int target =28;
int len =10;
bool sum1();//暴力枚举
int main()
{
	sum1();
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