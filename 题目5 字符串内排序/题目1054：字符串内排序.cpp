/**************************************************************
时间限制：1 秒 内存限制：32 兆 特殊判题：否
题目描述：
输入一个字符串，长度小于等于200，然后将输出按字符顺序升序排序后的字符串。
输入：
测试数据有多组，输入字符串。
输出：
对于每组输入,输出处理后的结果。
样例输入：
bacd
样例输出：
abcd

****************************************************************/
#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int main()
{
    char a[200];
    while(cin>>a)
    {
        int len=strlen(a);
        sort(a,a+len);
        cout<<a<<endl;  
    }
    return 0; 
} 
 
/**************************************************************
    Problem: 1054
    User: 略懂略懂
    Language: C++
    Result: Accepted
    Time:0 ms
    Memory:1520 kb
****************************************************************/