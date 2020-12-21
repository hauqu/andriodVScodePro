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

    cout<<maxArea2(test)<<endl;
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
    /*
     设置初始状态 取底最大 
     指针在向中间移动到过程中，底不断减小，
     所以面积也呈减小趋势，要 想获得更大的面积
     舍弃较短的板子进行探索

     证明：
     主要式子
     int area = min(arr[i],arr[j]) *(j-i);
	 
     任何的改变都会导致(j－i)减小，因为向内移动
     1.当选择改变短板 ，新板可能减小，不变，增大 ，
     所以min(arr[i],arr[j]) 可能 减小，不变，增大 
     所以area可能减小，不变，增大
	 2.当选择改变长板，新板可能减小，不变，增大
     但是min(arr[i],arr[j])去最小，即使 较大值变大，取min 后
     min(arr[i],arr[j])不变
     area 可能不变，减小，不能变大
     综上所述 ，舍弃短板

    */
   	int len =arr.size();
	int maxarea =0;
    int i=0;int j =len -1;
	while(i<j)
    {
		int area = min(arr[i],arr[j]) *(j-i);
        if(area>maxarea) maxarea =area;
        if(arr[i]<arr[j]) i++;
        else j--;
    }
	return maxarea;
}