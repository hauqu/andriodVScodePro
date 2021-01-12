#include"Graph.h"

using namespace std;

Graph test(5,5,10);
int main()
{
	test.readMap("wfy.txt");
    for(int i =0;i<test.g.size();i++)
    {
        for(int j=0;j<test.g[i].size();j++)
        {
			cout<<test.g[i][j].d;
        }
        cout<<endl;
    }cout<<endl;
    vector<node>t;

    if(test.remove(0,0,1,0,t))
    {
        cout<<"能消除"<<endl;
    }else 
    {
        cout<<"不能消除"<<endl;
    }
    
    
    return 0;
}