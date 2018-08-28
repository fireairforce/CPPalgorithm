#include<bits/stdc++.h>
using namespace std;
int main()
{
    char qaq1[40],qaq2[40];
    cin.getline(qaq1,20,',');
    int age;double a1,a2,a3,a4,a5;
    char emm;
    cin>>age>>emm;
    cin.getline(qaq2,20,',');
    cin>>a1>>emm>>a2>>emm>>a3>>emm>>a4;
    a5=(a1+a2+a3+a4)/4;
    cout<<qaq1<<","<<age<<","<<qaq2<<","<<a5<<endl;
    return 0;
}
