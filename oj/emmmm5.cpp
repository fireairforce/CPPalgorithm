#include <bits/stdc++.h>
using namespace std;
namespace FastIO{
    #define BUF_SIZE 10000000  ///  �������ݵĴ�С.
    bool IOerror=0;
    inline char nc(){
        static char buf[BUF_SIZE], *p1=buf+BUF_SIZE, *pend=buf+BUF_SIZE;
        if(p1==pend){
            p1=buf;
            pend=buf+fread(buf, 1, BUF_SIZE, stdin);
            if(pend==p1){
                IOerror=1;
                return -1;
            }
        }
        return *p1++;
    }
    inline bool blank(char ch){
        return ch==' '||ch=='\n'||ch=='\r'||ch=='\t';
    }
    inline void read(int &x){
        char ch;
        int sign=1;
        while(blank(ch=nc()));
        if(IOerror)return;
        if(ch=='-'){
            sign=-1;
            ch=nc();
        }
        for(x=ch-'0'; (ch=nc())>='0'&&ch<='9'; x=x*10+ch-'0');
        x*=sign;
    }
    inline void read_ss(char *p){
        char ch;
        while(blank(ch=nc()));
        if(IOerror)return;
        for(int a=0; ; a++){
            if(ch==' '||ch=='\n'||ch=='\r'||ch==-1||ch=='\t'){
                *(p+a)=0;
                return;
            }
            *(p+a)=ch;
             ch=nc();
        }
    }
    #undef BUF_SIZE
}
using namespace FastIO;

int main() {
    int n;
    FastIO::cin>>n;
    int t,emm;
    for(int i=0;i<n;i++)
    {
        FastIO::cin>>t;
        read(t);
        if(i==n-2)
        {
           emm=t;
        }
    }
    FastIO::cout<<emm<<FastIO::endl;
    read(n);


}
