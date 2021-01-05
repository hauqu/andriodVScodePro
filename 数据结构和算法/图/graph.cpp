/*
建立一个连接表图结构
*/
#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<unordered_set>
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
    vector<string>name;
	nodeCate cate;
};
class vect
{
	int desId;
    int weight;
};
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