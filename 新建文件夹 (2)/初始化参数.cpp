#include<iostream>
using namespace std;
class Cshape {
public:
	virtual float Area()=0;  //���麯��Area()������
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
	Area(int v,int l,int h,int r):t(v),r(l,h),c(r){}  //�Ӷ����ʼ���б�
	float sum() {
		return t.Area()+r.Area()+c.Area();
	}
};
int main() {
	Area a(10,20,30,5);  //������
	cout<<a.sum()<<endl;
	return 0;
}
