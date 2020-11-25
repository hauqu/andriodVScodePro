#include<iostream>
#include<string>
using namespace std;
/*
找出不含重复字符的最长子串
*/
bool findC(string s, char c);
string m ="abca";

string sonString(string s);//暴力解法

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