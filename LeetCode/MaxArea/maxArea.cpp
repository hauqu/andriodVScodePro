#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
/*

给定整数数组，
求 两个元素与X轴围成的梯形面积中的矩形面积
的最大值

*/
int maxArea(vector<int>&arr);
int maxArea2(vector<int>&arr);

vector<int>test={1,8,6,2,5,4,8,3,7};
int main(int argc,char *argv[])
{
    cout<<maxArea(test)<<endl;
    return 0;
}

int maxArea(vector<int>&arr)
{
    //暴力解法
    //复杂度 n^2
	int maxarea = 0;
    int len = arr.size();
    for(int i =0; i<len-1;i++)
    {
        for(int j =i+1;j<len;j++)
        {
            int area = (j - i)*min(arr[i],arr[j]);
            if(area>maxarea) maxarea = area;
        }
    }
    return maxarea;
}

int maxArea2(vector<int>&arr)
{

	//双指针解法
    

}