#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0;
    for(int a=0; a<=9; a++)
        for(int b=0; b<=9; b++)
        {
            if(abs(b-a)==1||b==a) continue;
            for(int c=0; c<=9; c++)
            {
                if(abs(c-b)==1||c==a||c==b) continue;
                for(int d=0; d<=9; d++)
                {
                    if(abs(d-a)==1||d==a||d==b||d==c) continue;
                    for(int e=0; e<=9; e++)
                    {
                        if(abs(e-a)==1||abs(e-b)==1||abs(e-d)==1||e==a||e==b||e==c||e==d) continue;
                        for(int f=0; f<=9; f++)
                        {
                            if(abs(f-a)==1||abs(f-b)==1||abs(f-c)==1||abs(f-e)==1||f==a||f==b||f==c||f==d||f==e) continue;
                            for(int g=0; g<=9; g++)
                            {
                                if(abs(g-b)==1||abs(g-c)==1||abs(g-f)==1||g==a||g==b||g==c||g==d||g==e||g==f) continue;
                                for(int h=0; h<=9; h++)
                                {
                                    if(abs(h-d)==1||abs(h-e)==1||h==a||h==b||h==c||h==d||h==e||h==f||h==g) continue;
                                    for(int i=0; i<=9; i++)
                                    {
                                        if(abs(i-d)==1||abs(i-e)==1||abs(i-f)==1||abs(i-h)==1||i==a||i==b||i==c||i==d||i==e||i==f||i==g||i==h) continue;
                                        for(int j=0; j<=9; j++)
                                        {
                                           if(abs(j-e)==1||abs(j-f)==1||abs(j-g)==1||abs(j-i)==1||j==a||j==b||j==c||j==d||j==e||j==f||j==g||j==h||j==i) continue;
                                            sum++;
                                        }

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

    cout<<sum<<endl;

    return 0;
}
