#include<bits/stdc++.h>
using std::cout;
class Point{
public:
    friend double distance(const Point&p1,const Point &p2);
    Point(int xx=0,int yy=0):x(xx),y(yy){}
private:
    int x,y;
};
double distance(const Point&p1,const Point &p2)
{
    return sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y));
}
int main()
{
    Point p0,p1(3,4);
    cout<<distance(p1,p0);
    return 0;
}
