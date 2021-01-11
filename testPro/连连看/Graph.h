#include<vector>
#include<string>
#include<iostream>
#include<fstream>
#include<istream>

using namespace std;


class node
{
public:
    int d;// 0代表无
    int x;
    int y;
    node(int data,int X,int Y)
    :d(data),
    x(X),
    y(Y)
    {
        
    }
    node():
    d(0),
    x(0),
    y(0)
    {

    }
    
};
class Graph
{
    public:

    vector<vector<node>>g;
    /*
    00 10 20 30 40 ** n0
    01 11 21 31 41 ** n1
    ** ** ** ** ** ** **
    0n 1n 2n 3n 4n ** nn
    */
    Graph(int w,int h,int k);
	bool readMap(string name);
	bool search_direct(int x1,int y1,int x2,int y2);
	bool search_vertical(int x1,int y1,int x2,int y2);
    bool search_horizontal(int x1,int y1,int x2,int y2);
    bool search_one_inflection(int x1,int y1,int x2,int y2);
    bool search_two_inflection(int x1,int y1,int x2,int y2);
};
Graph::Graph(int w,int h,int k)
{
	g.resize(w);
    for(int i=0;i<w;i++)
    {
		g[i].resize(h);
    }
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<h;j++)
        {
            g[i][j]  =node(0,i*k,j*k);
        }
    }
}


bool Graph::readMap(string name)
{
    int w = g.size();
    int h =g[0].size();
	ifstream file(name,ios::in);
    for (int i = 0; i < w; i++)
	{
		for(int j=0;j<h;j++)
		{
			char c = file.get();
			if (c == '\n')
			{
				j--;
				continue;
			}
            g[i][j].d = c-'0';
        }
    }
	file.close();
    return true;	
}




bool Graph::search_direct(int x1,int y1,int x2,int y2)
{
    //直接相邻
	if(x1==x2)
    {
       if(y1==y2+1||y1 ==y2-1)
       {
    		if(g[x1][y1].d==g[x2][y2].d)
            {
                return true;
            }       
       } 
    }else if(y1==y2)
    {
        if(x1==x2+1||x1==x2-1)
        {
			if(g[x1][y1].d==g[x2][y2].d)
            {
                return true;
            }
        }
    }

    return false;


}

bool Graph::search_vertical(int x1,int y1,int x2,int y2)
{
    bool falg =true;
	if(x1==x2)
    {
       if(y1>y2)
       {
			for(int i =y2+1;i<y1;i++)
            {
                if(g[x1][i].d !=0)
                	falg =false;
            }
       }
       else if(y1<y2)
       {
		for(int i =y1+1;i<y2;i++)
            {
                if(g[x1][i].d !=0)
                	falg =false;
            }
       }
    }
    return falg;
}


bool Graph::search_horizontal(int x1,int y1,int x2,int y2)
{
    bool falg =true;
	if(y1==y2)
    {
       if(x1>x2)
       {
			for(int i =x2+1;i<x1;i++)
            {
                if(g[i][y1].d !=0)
                	falg =false;
            }
            
       }
       else if(x1<x2)
       {
		for(int i =x1+1;i<x2;i++)
            {
                if(g[i][y1].d !=0)
                	falg =false;
            }
       } 
    }
    return falg;
}

bool Graph::search_one_inflection(int x1,int y1,int x2,int y2)
{

	node c1 =g[x1][y2];
    node c2 =g[x2][y1];
    if(c1.d==0)
    {
		if(search_vertical(x1,y2,x1,y1)==true)
        {
            if(search_horizontal(x1,y2,x2,y2)==true)
            {
 				return true;               
            }
        }
    }
    else if(c2.d==0)
    {
		if(search_horizontal(x2,y1,x1,y1)==true)
        {
            if(search_vertical(x1,y2,x2,y2)==true)
            {
 				return true;               
            }
        }
    }

    return false;
}

bool Graph::search_two_inflection(int x1,int y1,int x2,int y2)
{
    //两个拐点
    //找到一条直线使得 目标点能够线性连接该直线
	//一个拐点可以看做直线一端与目标点重合
}