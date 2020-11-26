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
string m ="abcabcbb";

string sonString(string s);//暴力解法
/*
滑动窗口法，查找重复字符串使用哈希表
 🍰
 当子串 向右包含一个字符 重复时，假设重复的字符位置 i ,新重复字符 j
 则新子串左端位置应当从i 开始 ，j 结束
*/
int countC(string t,char c);
string songString2(string s);

int main(int arg,char *argv[])
{
    cout<<"解法一"<<endl;
    cout<<m<<endl;
    cout<<sonString(m)<<endl;
    cout<<"解法二"<<endl;
	//cout<<songString2(m)<<endl;

    
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
int countC(string t,char c)
{
    int n =t.size();

   for(int i=0;i<n;i++)
   {
       if(t[i]==c)
       return i+1;
   }
   return -1;//找不到返回 -1
}
string songString2(string s)
{
  
   int n =s.size();
   int l =0;int r =0;
   string son,temp;
//每次 不是只移动一格，而是滑动一段
	son+=s[0];
   temp+=s[0];
   while(r+1!=n)
   {
	   int j= countC(temp,s[r]);
       if(j ==-1)
       {
           temp+=s[r];
           r++;
       }else
       {
           
       }
     

     
   }    
    return son;
}