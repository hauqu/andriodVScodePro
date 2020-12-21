#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

//反转 数字
// 123 ---321
int n =12356;
int main(int arg,char argv[])
{
    cout<<n<<endl<<"反转后"<<endl;
	//string ? string::reverse?
	string sn =std::to_string(n);
	reverse(sn.begin(),sn.end());
	n =std::stoi(sn);
	cout<<n<<endl;
    return 0;

}