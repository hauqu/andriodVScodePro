#include<iostream>
using namespace std;

void PrintArr(int arr[],int len);

void PrintArr2(int *arr,int len);
const int n =10;
int main(int argc,char**argv)
{
    
    int a[n] ={1};
    int *b;
    b =new int[10];

    PrintArr(a,n);
    PrintArr2(b,10);

    return 0;
}

void PrintArr(int arr[],int len)
{
    for(int i=0;i<len;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void PrintArr2(int *arr,int len)
{
    int *p =arr;
    for(int i=0;i<len;i++)
    {
        (*p)++;//函数内部会改变数组的值
        cout<<*p<<" ";
        p++;
    }cout<<endl;

}