#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int ans[4]={1,2,3,4};
    sort(ans,ans+4);    /* ���sort���Բ��ã���Ϊ{1��2��3��4}�Ѿ��ź���*/
    do                             /*ע���ⲽ�������whileѭ��������Ҫ��ǰ���*/
    {
        for(int i=0;i<4;++i)
            cout<<ans[i]<<" ";
        cout<<endl;
    }while(next_permutation(ans,ans+4));
    return 0;
}
