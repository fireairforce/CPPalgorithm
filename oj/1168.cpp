#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[])
{
double t,s,v,h;
int i,n;
printf("请输入格数：");
scanf("%d",&n); // 输入格数
t = 1;
s = 1;
for (i=2; i<=n; i++) {
t = t*2; // t 为第i格的麦粒数
s = s+t; // s 求所有格的麦粒和
}
v = s/1.42e8;
h = v*9/3.1415926;
h = pow(h, 1.0/3); // 求出麦堆得高
printf("总麦粒数约为：%.3e\n", s);
printf("折合体积约为：%.0f立方米\n", v);
printf("正圆锥麦堆高约为：%.0f米\n", h);
}
