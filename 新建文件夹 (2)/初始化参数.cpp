#include<iostream>
using namespace std;
class Cshape {
public:
	virtual float Area()=0;  //纯虚函数Area()的声明
};
class CTriangle: public Cshape {
	int vect;
public:
	CTriangle(int v):vect(v) {}
	float Area() {
		return vect*1.732/4;
	}

};
class CRect: public Cshape {
	int length,height;
public:
	CRect(int l,int h):length(l),height(h) {}
	float Area() {
		return length*height;
	}

};
class CCircle: public Cshape {
	int radius;
public:
	CCircle(int r):radius(r) {}
	float Area() {
		return 3.14*radius*radius;
	}
};
class Area {
	CTriangle t;
	CRect r;
	CCircle c;
public:
	Area(int v,int l,int h,int r):t(v),r(l,h),c(r){}  //子对象初始化列表
	float sum() {
		return t.Area()+r.Area()+c.Area();
	}
};
int main() {
	Area a(10,20,30,5);  //对象定义
	cout<<a.sum()<<endl;
	return 0;
}
