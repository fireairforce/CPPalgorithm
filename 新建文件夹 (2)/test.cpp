#include <iostream>
using namespace std;
int mian() {
	int n, i, jch;  //jch�ǽ׳�
	double result=0;  //result�ǽ��
	cin>>n;  //����n��ֵ
	if(n<1) {
		cout<<"�������"<<endl;
		return 0;
	}
	result=1;
	for(i=2,jch=1; i<=n; i++) {
		jch*=i;  //����׳�
		result+=jch;
	}
	cout<<result<<endl;
	return 0;
}

