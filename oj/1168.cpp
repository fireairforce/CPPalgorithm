#include <stdio.h>
#include <math.h>
int main(int argc, const char * argv[])
{
double t,s,v,h;
int i,n;
printf("�����������");
scanf("%d",&n); // �������
t = 1;
s = 1;
for (i=2; i<=n; i++) {
t = t*2; // t Ϊ��i���������
s = s+t; // s �����и��������
}
v = s/1.42e8;
h = v*9/3.1415926;
h = pow(h, 1.0/3); // �����ѵø�
printf("��������ԼΪ��%.3e\n", s);
printf("�ۺ����ԼΪ��%.0f������\n", v);
printf("��Բ׶��Ѹ�ԼΪ��%.0f��\n", h);
}
