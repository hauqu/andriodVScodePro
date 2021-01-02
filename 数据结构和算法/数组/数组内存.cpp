#include<iostream>

using namespace std;
int main(int argc,char**argv)
{
    int a[3][4] =
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    for(int i =0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<<a[i][j]
            <<"的地址为"<<"["<<i<<"]["<<j<<"]"
            <<&a[i][j]<<endl;
        }
        
    }
	cout<<"可得访问顺序从[0][0]-[0][3]--[1][0]-[1][3]--[2][3]"<<endl;
    return 0;
}