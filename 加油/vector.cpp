//��һ����������һֱ�������ݣ�ֱ������0��ʱ�����ֹͣ����������������������������С����
  #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<double> a;   //����һ��double���͵�������
    double number;
    vector<double>::iterator it;
    while(cin>>number)//�������double�� number �����洢������a��
    {
        if(number==0){
            break;
        }
        a.push_back(number);
    }
    it=a.begin();
    while (it!=a.end())
    {
        it++;
    }
    sort(a.begin(),a.end());
    it = a.begin();
    while (it != a.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
    it = a.begin();
    cout<<"Min = "<<*it<<endl;
    it = a.end() - 1;
    cout<<"Max = "<<*it<<endl;
    return 0;
} 
        
