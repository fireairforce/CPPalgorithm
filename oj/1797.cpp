#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    string a[107];
    string emm;
    getchar();
    for(int i=0;i<n;i++)
    {
        getline(cin,a[i]);
        emm+=a[i];
    }
    cout<<emm<<endl;
    cout<<emm.size()<<endl;
    return 0;
}
