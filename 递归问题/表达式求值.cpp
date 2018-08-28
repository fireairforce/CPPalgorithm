#include<bits/stdc++.h>
using namespace std;
int factor_value();
int term_value();
int expression_value();
int main()
{
    cout<<expression_value()<<endl;
    return 0;
}
int factor_value()
{
    int result=0;
    char c=cin.peek();
    if(c=='(')
    {
        cin.get();
        result=expression_value();
        cin.get();
    }
    else
    {
        while(isdigit(c))//如果c是一个数字字符。
        {
            result=10*result+c-'0';
            cin.get();//去掉此时输入流里面的第一个字符。
            c=cin.peek();//读取此时输入流的第一个字符。
        }
    }
    return result;
}
int term_value()
{
    int result=factor_value();
    while(true)
    {
        char op=cin.peek();
        if(op=='*'||op=='/')
        {
            cin.get();
            int value=factor_value();
            if(op=='*')
            {
                result*=value;
            }
            else result/=value;
        }
        else break;
    }
    return result;
}
int expression_value()//求一个表达式的值。
{
    int result=term_value;//求第一项的值。
    bool more=true;
    while(more)
    {
        char op=cin.peek();//看第一个字符，不拿走。
        if(op=='+'||op=='-')
        {
            cin.get();//从输入里面取走一个字符。
            int value=term_value();
            if(op=='+') result+=value;
            else result-=value;
        }
        else more=false;
    }
    return result;
}
//输入：(2+3）*(5+7)+9/3;
//输出：63
