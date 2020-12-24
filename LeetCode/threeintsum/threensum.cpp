#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

/*

找出满足a +b +c =0 的三元组

*/

void solution1(vector<int>&arr);

void solution2(vector<int>&arr);

vector<int>test ={0,1,2,3,4,5,-3,-6,-1};
int main(int argc,char*argv[])
{
    cout<<"暴力枚举:"<<endl;
    solution1(test);
    cout<<"分而治之"<<endl;
    solution2(test);
    return 0;
}

void solution1(vector<int>&arr)
{
    //暴力枚举，复杂度 N*N*N
    int len =arr.size();
    for(int i=0;i<len-2;i++)
    {
        for(int j =i+1;j<len-1;j++)
        {
            for(int k =j+1;k<len;k++)
            {
				if(arr[i]+arr[j]+arr[k]==0)
                cout<<arr[i]<<" "
                <<arr[j]<<" "
                <<arr[k]<<endl;
            }
        }
    }
}

void solution2(vector<int>&arr)
{
    //分而治之,复杂度 N*N
    /*
    有0 ，一正一负
    无0 ，两正一负，两负一正
    */
   //利用哈希表进行查找，降低时间复杂度
	unordered_set<int>p;
    vector<int>vp;
	vector<int>vn;
	unordered_set<int>n;
    bool zero =false;// 是否有0
    int len =arr.size();
    for(int i=0;i<len;i++)
    {
        if(arr[i]>0){
        p.insert(arr[i]);
        vp.push_back(arr[i]);
        }
        else if(arr[i]<0)
        {
        n.insert(arr[i]);
        vn.push_back(arr[i]);
        }
        else zero =true;
    }
    int lenp = vp.size();
    int lenn =vn.size();


    if(zero)
    {
        cout<<"0 的情况"<<endl;
		//退化为两数求和。
        for(auto i = p.begin();i!=p.end();i++)
        {
        	auto temp = n.find(-(*i));
            if(temp!=n.end())
            cout<<*i<<" 0 "<<*temp<<endl;
        }


    } 
    
    cout<<"两正一负"<<endl;
        //两正一负
	for(int i=0;i<lenp-1;i++)
    {
        for(int j =i+1;j<lenp;j++)
        {
            auto temp = n.find(-(vp[i]+vp[j]));
            if(temp!=n.end())
            cout<<vp[i]<<" "<<vp[j]<<" "<<(*temp)<<endl;
        }
    }
		//两负一正
    cout<<"两负一正"<<endl;
	for(int i=0;i<lenn-1;i++)
    {
        for(int j =i+1;j<lenn;j++)
        {
            auto temp = p.find(-(vn[i]+vn[j]));
            if(temp!=p.end())
            cout<<vn[i]<<" "<<vn[j]<<" "<<(*temp)<<endl;
        }
    }

}