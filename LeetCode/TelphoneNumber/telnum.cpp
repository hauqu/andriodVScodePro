#include<iostream>
#include<unordered_map>
#include<string>
#include<list>
using namespace std;


/*

电话号码的所有字母组合

与手机上的九宫格输入法一致
回溯法
深度优先遍历所有可能情况，满足则收入解集，
不满足则返回根进行其他尝试
2 -abc
3 -def
4 -ghi
5 -jkl
6 -mno
7 -pqrs
8 -tuv 
9 -wxyz

给定数字字符串求能表示的所有字母组合


*/
 unordered_map<char,string>phoneMap
    {
        {'2',"abc"},
       	{'3',"def"},
        {'4',"ghi"},
		{'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };
void solution(string s);
int main(int argc,char*argv[])
{
    return 0;
}

void solution(string s)
{
   //根据给定字符串生成一个树，遍历该树即可。
   list<string>ss;
   s.reserve();
   while(!s.empty())
   {
       char c =s.back();
       s.pop_back();
	   string temp =(*phoneMap.find(c)).second;
       
   }


}


/*
 		{'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}


*/