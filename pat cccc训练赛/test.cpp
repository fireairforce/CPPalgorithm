#include<bits/stdc++.h>
using namespace std;
class MyBag
{
public:
    MyBag(string br,string cr):brand(br),color(cr){++count;}
    ~MyBag(){--count;}
    static int GetCount() {return count;}
private:
    string brand,color;
    static int count;
};
  int MyBag::count=0;
int main()
{
    MyBag one("CityLife","Gray"),two("MIcky","Red");
    return 0;
}
