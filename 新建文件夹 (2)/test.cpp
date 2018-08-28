#include <iostream>
using namespace std;
int mian() {
	int n, i, jch;  //jch是阶乘
	double result=0;  //result是结果
	cin>>n;  //输入n的值
	if(n<1) {
		cout<<"输入错误！"<<endl;
		return 0;
	}
	result=1;
	for(i=2,jch=1; i<=n; i++) {
		jch*=i;  //计算阶乘
		result+=jch;
	}
	cout<<result<<endl;
	return 0;
}

