#include<iostream>
#include<string>

using namespace std;
string sonString(string s);
string test ="abcabcbb";
int main(int argc,char *argv[])
{
    cout<<test<<endl;
	cout<<sonString(test)<<endl;;
    return 0;
}
int countC(string s,char c);
int countC(string s,int sl,int sr,char c);
string sonString(string s)
{
    int l =0;int r =0; //最大子串 
    int i=0;//工作指针
    int j=0;int k=0;//临时子串
	int n =s.size();
    for(i=1;i<n;i++)
    {
		int si = countC(s,j,k,s[i]);
        if(si==-1)
        {
            //新字符是未重复字符
            k++;//临时子串右标右移
        }else
        {
            //新字符重复
			int ans = r-l;
            int anst= k-j;
            if(anst>ans)
            {
            	//计算是否更新子串
                l= j;r =k;
            }
            //临时子串滑动
            int move =  i-si;
            j+=move;//向右滑动
            k = i;//游标右移
        }
    }
    string son;
    for(l;l<=r;l++)
    {
		son+=s[l];
    }
    return son;
}
int countC(string s,char c)
{
    //返回在 子串中的下标
    int n =s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i]==c)
        return i;
    }
    return -1;
}
int countC(string s,int sl,int sr,char c)
{
    //返回 在主串中的下标
    for(int i =sl;i<=sr;i++)
    {
        if(s[i]==c)
        return i;
    }
    return -1;
    /*

    该函数 的复杂度为子串的长度，糟糕的情况下
    多次调用 会增大主体的复杂度
    使用 空间换时间？
    */
}

