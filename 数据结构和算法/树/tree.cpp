#include"tree.h"

using namespace std;

vector<int>arr={1,2,3,-1,-1,-1,-1};
int main()
{
    BiTree test = BiTree(arr);
    cout<<" 先序遍历"<<endl;
	test.preorderTraversal(test.root);
    cout<<"执行完毕"<<endl;
    cout<<" 层序遍历"<<endl;
    test.sequenceTraversal(test.root);
    cout<<"执行完毕"<<endl;
      
    return 0;
}