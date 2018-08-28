#include<bits/stdc++.h>
using namespace std;
class M
{
public:
    M(double d=0.0):val(d){ }
    friend M operator-();
private:
    double val;
};
int main()
{
    M y(4.6),z;
    z=6.7-y;
    return 0;
}
