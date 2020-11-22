#include<iostream>
using namespace std;
int nums[10]={5,7,9,2,4,24,27,26,11,88};
int target =28;
int len =10;

int main()
{
	for(int i=0;i<len-1;i++)
    {
        for(int j=1;j<len;j++)
        {
			if(nums[i]+nums[j]==target)
            {
               //cout<<i<<"   "<<j<<endl;
            	cout<<nums[i]<<"+"<<nums[j]<<"="<<target<<endl;
            }
        }
    }	
    return 0;
}