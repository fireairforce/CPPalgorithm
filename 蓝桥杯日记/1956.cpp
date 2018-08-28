#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e6 + 5;
map<string, int> m;
char str[maxn];
int main()
{
    while(~scanf(" %s", str))
    {
        int t;
        scanf("%d", &t);
        int len = strlen(str);
        for(int i = 0; i+7 < len; i++)
        {
            string s;
            for(int j = i; j < i+8; j++)
                s += str[j];
            sort(s.begin(), s.end());
            m[s]++;
        }
        int ans = 0;
        string s;
        while(t--)
        {
            cin >> s;
            sort(s.begin(), s.end());
            ans += m[s];
        }
        printf("%d\n", ans);
    }
    return 0;
}
