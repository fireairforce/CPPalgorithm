#include <iostream>
using namespace std;
int main() {
	int i, j, number, a[11]= {1,2,4,6,8,9,12,15,20,30};
	cout<<"请输入一个数:";
	cin>>number;  //输入number的值
	cout<<"开始的数组:";
	for(i=0; i<10; i++)
		cout<<a[i]<<" ";
	cout<<endl;
	i=0;
	while (i<10&&number>=a[i]) i++;
	for(j=10; j>=i; j--)
		a[j]=a[j-1];
	a[i]=number;
	cout<<"插入后的数组:";
	for(i=0; i<11; i++)
		cout<<a[i]<<" ";
	return 0;
}
