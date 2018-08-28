//对一个容器里面一直输入数据，直到遇到0的时候程序停止，最后输出这组数据里的最大数和最小数。
  #include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    vector<double> a;   //定义一个double类型的容器。
    double number;
    vector<double>::iterator it;
    while(cin>>number)//将输入的double型 number 变量存储到容器a中
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
        
