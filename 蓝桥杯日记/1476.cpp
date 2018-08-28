#include<iostream>
using namespace std;
int s[5005];
int t,n;
int main(){
    cin>>t;
    int i,j,k;
    while(t--){
        cin>>n;
        for( i = 1 ; i <= n ; ++i )
        {
            s[i] = i;
        }
        j = n+1;
        while( j > 4 )
        {
            k = 1;
            for( i = 1 ; i < j ; ++i )
                if( i % 2 )
                    s[k++] = s[i];
            j = k;
            if( j <= 4 ) break;
            k = 1;
            for( i = 1 ; i < j ; ++i )
            {
                 if( i % 3 )
                 {
                  s[k++] = s[i];
                 }
            }
            j = k;
        }
        cout<<'1';
        for( i = 2 ; i < j ; ++i )
        {
           cout<<' '<<s[i];
        }
        cout<<endl;
    }
    return 0;
}
