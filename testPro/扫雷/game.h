#include<vector>
#include<iostream>
using namespace std;


/*
0代表不显示
－1 代表深色不显示
12345678数字代表有几颗雷
9代表小旗子
10 代表 踩着雷了
11 代表雷 

*/
class Map
{

public:
	vector<vector<bool>>mine;//雷
    
	vector<vector<int>>draw;//显示
    Map(int w,int h,int n);
    int findMine(int x,int y);//寻找某一个格子周围雷的数量
    //地图大小，雷的个数
private:
	const int W;
    const int H;
    const int N;	
};

Map::Map(int w,int h,int n):
	W(w),H(h),N(n)
    {
		mine.resize(w);
        draw.resize(w);
        for(int i =0;i<W;i++)
        {
            mine[i].resize(H,false);
            draw[i].resize(H,0);
        }

	while(n>=0)
    {
        n--;
        int x =rand()%W;
        int y =rand()%H;
        if(mine[x][y]==false){
        	mine[x][y]=true;
            }
        else 
        {
            n++;
        }

    }
	

    }
int Map::findMine(int x,int y)
{
    //上下左右四个边界
	int n =0;
    bool xl,xh,yl,yh;
    xl =xh =yl =yh =false;
    //上边界
    if(y>0)
    {
        if(mine[x][y-1]==true)
        	n++;
        yl =true;
    }
    //下边界
    if(y<H-2)
    {
        if(mine[x][y+1]==true)
        	n++;
        yh =true;
    }
    if(x>0)
    {
		if(mine[x-1][y]==true)
        	n++;
        xl =true;
    }
    if(x<W-2)
    {
        if(mine[x+1][y]==true)
        	n++;

        xh =true;
    }

	if(xl&&yl)
    {
		if(mine[x-1][y-1]==true)
        	n++;
    }
    if(xl&&yh)
    {
		if(mine[x-1][y+1]==true)
        	n++;
    }
    if(xh&&yl)
    {
		if(mine[x+1][y-1]==true)
        	n++;
    }
    if(xh&&yh)
    {
		if(mine[x+1][y+1]==true)
        	n++;
    }
    return n;

}

