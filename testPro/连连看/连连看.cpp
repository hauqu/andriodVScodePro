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
			cout<<test.g[i][j].d<<"("
            <<test.g[i][j].x<<","
            <<test.g[i][j].y<<") ";
        }
        cout<<endl;
    }
    return 0;
}