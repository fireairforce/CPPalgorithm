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
        while(isdigit(c))//���c��һ�������ַ���
        {
            result=10*result+c-'0';
            cin.get();//ȥ����ʱ����������ĵ�һ���ַ���
            c=cin.peek();//��ȡ��ʱ�������ĵ�һ���ַ���
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
int expression_value()//��һ�����ʽ��ֵ��
{
    int result=term_value;//���һ���ֵ��
    bool more=true;
    while(more)
    {
        char op=cin.peek();//����һ���ַ��������ߡ�
        if(op=='+'||op=='-')
        {
            cin.get();//����������ȡ��һ���ַ���
            int value=term_value();
            if(op=='+') result+=value;
            else result-=value;
        }
        else more=false;
    }
    return result;
}
//���룺(2+3��*(5+7)+9/3;
//�����63
