#include <iostream>
using namespace std;
int main() {
	int i, j, number, a[11]= {1,2,4,6,8,9,12,15,20,30};
	cout<<"������һ����:";
	cin>>number;  //����number��ֵ
	cout<<"��ʼ������:";
	for(i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	i=0;
	while (i<10&&number>=a[i]) i++;
	for(j=10; j>=i; j--)
		a[j]=a[j-1];
	a[i]=number;
	cout<<"����������:";
	for(i=0; i<11; i++)
		cout<<a[i]<<" ";
	return 0;
}
