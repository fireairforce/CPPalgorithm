/*
����һ��N�����N�ʺ�ÿ���ʺ��ŷŵ�ÿ�е��е�λ�á�
*/
#include<bits/stdc++.h>
using namespace std;
int N;
int queenPos[100];
//���������õĻʺ�λ�á������Ͻ���(0,0)��
void NQueen(int k);
int main()
{
    cin>>N;
    NQueen(0);//�ӵ�0�п�ʼ�ڻʺ�
    return 0;
}
void NQueen(int k)
{
    int i;
    if(k==N)
    {
        for(i=0;i<N;i++)
        {
            cout<<queenPos[i]+1<<" ";
        }
        cout<<endl;
        return ;
    }
    for(i=0;i<N;i++)
    {//�𽥳��Ե�K���ʺ��λ�á�
        int j;
        for(j=0;j<k;j++)
        {
            //���Ѿ��ںõ�K���ʺ��λ�ñȽϣ������Ƿ��ͻ��
            if(queenPos[j]==i||abs(queenPos[j]-i)==abs(k-j))
            {
                break;//��ʾ��ͻ����ʼ��һ��λ�á�
            }
        }
        if(j==k)
        {//��ǰѡ��λ��i����ͻ��
            queenPos[k]=i;//����K���ʺ�ڷ���λ��i��
            NQueen(k+1);
        }
    }
}
