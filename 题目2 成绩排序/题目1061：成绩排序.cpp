/**************************************************************
时间限制：1 秒内存限制：32 兆特殊判题：否
题目描述：
    有N个学生的数据，将学生数据按成绩高低排序，如果成绩相同则按姓名字符的字母序排序，如果姓名的字母序也相同则按照学生的年龄排序，并输出N个学生排序后的信息。
输入：
    测试数据有多组，每组输入第一行有一个整数N（N<=1000），接下来的N行包括N个学生的数据。
    每个学生的数据包括姓名（长度不超过100的字符串）、年龄（整形数）、成绩（小于等于100的正数）。
输出：
    将学生信息按成绩进行排序，成绩相同的则按姓名的字母序进行排序。
    然后输出学生信息，按照如下格式：
    姓名 年龄 成绩
样例输入：
3
abc 20 99
bcd 19 97
bed 20 97
样例输出：
bcd 19 97
bed 20 97
abc 20 99
提示：
学生姓名的字母序区分字母的大小写，如A要比a的字母序靠前(因为A的ASC码比a的ASC码要小)。
****************************************************************/
#include <algorithm>
#include <string.h>
using namespace std;
#include <stdio.h>
struct E {
    char name[101];
    int age;
    int score;
}buf[1000];
bool cmp(E a,E b){
    if(a.score!=b.score) return a.score<b.score; 
    int tmp=strcmp(a.name,b.name);
    if(tmp!=0) return tmp<0;
    else return a.age<b.age;
}
int main(int argc, char* argv[])
{
    //ifstream cin("aaa.txt");
    int n,i;
    while(scanf("%d",&n)!=EOF){
        for(i=0;i<n;i++){
            scanf("%s%d%d",buf[i].name,&buf[i].age,&buf[i].score);
        }
        sort(buf,buf+n,cmp);
    for(i=0;i<n;i++){
        printf("%s %d %d\n",buf[i].name,buf[i].age,buf[i].score);
    }
    }
    return 0;
}
 
/**************************************************************
    Problem: 1061
    User: 略懂略懂
    Language: C++
    Result: Accepted
    Time:90 ms
    Memory:1140 kb
****************************************************************/