#include<bits/stdc++.h>
using namespace std;
const int maxn=1e4+7;
struct emm
{
    string name1;
    int x1;
    int y1;
    int z1;
    int l1;
}q[maxn];
bool cmp(const emm&a1,const emm&a2)
{
    if(a1.l1==a2.l1)
    {
        return a1.name1<a2.name1;
    }
        return a1.l1>a2.l1;
}
int main()
{
    int p,m,n,x;
    scanf("%d %d %d",&p,&m,&n);
    string name;
    map<string,int>emm1;
    map<string,int>emm2;
    map<string,int>emm3;
    map<string,int>emm4;
    for(int i=0;i<p;i++)
    {
       cin>>name;
       scanf("%d",&x);
       if(x>=200)
       {
           emm1[name]=x;
           emm2[name]=-10;
           emm3[name]=-10;
       }
       else continue;
    }
    for(int i=0;i<m;i++)
    {
        cin>>name;
        scanf("%d",&x);
        if(emm1[name]>=200)
        {
            emm2[name]=x;
        }
        else if(emm1[name]==NULL)
        {
            continue;
        }
    }
    for(int i=0;i<n;i++)
    {
        cin>>name;
        scanf("%d",&x);
        if(emm1[name]>=200)
        {
            emm3[name]=x;
        }
        else if(emm1[name]==NULL)
        {
            continue;
        }
    }
   map<string,int>::iterator iter;
   int voice=0;
   for(iter=emm1.begin();iter!=emm1.end();iter++)
   {
       if(emm2[iter->first]==-10&&emm3[iter->first]==-10)
       {
           continue;
       }
       else if(emm2[iter->first]==-10&&emm3[iter->first]!=-10)
       {
           if(emm3[iter->first]>=60)
            {
                emm4[iter->first]=emm3[iter->first];
            }
       }
       else if(emm2[iter->first]!=-10&&emm3[iter->first]!=-10)
       {
           if(emm2[iter->first]>emm3[iter->first])
           {
               int force=round((double)(0.4*emm2[iter->first])+(double)(0.6*emm3[iter->first]));
               if(force>=60)
               {
                    emm4[iter->first]=force;
               }
           }
           else if(emm2[iter->first]<=emm3[iter->first])
           {
               if(emm3[iter->first]>=60)
               {
                   emm4[iter->first]=emm3[iter->first];
               }
           }
       }
   }
   for(iter=emm4.begin();iter!=emm4.end();iter++)
   {
       q[voice].name1=iter->first;
       q[voice].x1=emm1[iter->first];
       q[voice].y1=emm2[iter->first];
       q[voice].z1=emm3[iter->first];
       q[voice].l1=iter->second;
       voice++;
   }
   sort(q,q+voice,cmp);
   for(int i=0;i<voice;i++)
   {
       if(q[i].y1==-10&&q[i].z1!=-10)
       {
           q[i].y1=-1;
       }
       else if(q[i].z1==-10&&q[i].y1!=-10)
       {
           q[i].z1=-1;
       }
       else if(q[i].y1==-10&&q[i].z1==-10)
       {
           q[i].y1=-1;
           q[i].z1=-1;
       }
       cout<<q[i].name1<<" "<<q[i].x1<<" "<<q[i].y1<<" "<<q[i].z1<<" "<<q[i].l1<<endl;
   }
    return 0;
}
