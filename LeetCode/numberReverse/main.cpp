#include<iostream>
#include<string>
using namespace std;

//反转 数字
// 123 ---321
int n =12345;
int main(int arg,char argv[])
{
    
	//string ? string::reverse?
	string sn =std::to_string(n);
	sn.reserve();
	n = std::atoi(sn);

    
    return 0;
}