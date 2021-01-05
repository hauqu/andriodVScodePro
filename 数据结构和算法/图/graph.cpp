/*
建立一个连接表图结构
*/
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<map>
using namespace std;
enum nodeCate
{
	waynode,building
};
class  node
{
public:
	int x;
    int y;
    vector<string>namelist;
    node(int _x,int _y);
	nodeCate cate;
public:
    bool addName(string n);
};
bool node::addName(string n)
{
    namelist.push_back(n);
}
node::node(int _x,int _y):x(_x),y(_y),
cate(nodeCate::building)
{
	namelist.push_back("null");
}
class vect
{
	int desId;
    int weight;
    vect(int id,int w);
};
vect::vect(int id ,int w):
desId(id),weight(w)
{

}
class Graph
{
    public:
    //图内需要同时存储节点信息和连接信息
	map<int,node>nodeInformation;//根据ID找节点信息
    map<int,list<vect>>nodeConnect;//根据ID找连接
};
int main(int argc,char*argv[])
{
    return 0;
}