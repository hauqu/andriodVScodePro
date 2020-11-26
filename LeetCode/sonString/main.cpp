#include<iostream>
#include<string>
#include<set>

#include<unordered_set>
//该头文件包含一种无序集合
using namespace std;
/*
找出不含重复字符的最长子串
*/
bool findC(string s, char c);
string m ="abca";

string sonString(string s);//暴力解法
/*
滑动窗口法，查找重复字符串使用哈希表


*/
std::unordered_set<char>occ;
int main(int arg,char *argv[])
{
    cout<<m<<endl;
    cout<<sonString(m)<<endl;


    
    return 0;
}
bool findC(string s, char c)
{
 if(s.empty()) return false;
 for(int i =0;i<s.length();i++)
    {
       if(s[i] ==c)
       return true;
    }
    return false;
}
string sonString(string s)
{
    string temp;
    string son;
    for(int i =0;i<s.length();i++)
    {
        if(findC(temp,s[i])==false)
        temp+=s[i];
        else 
        {
           if(temp.length()>son.length())
               son =temp;  
    
            temp ="";
        }
    }
    return son;
}