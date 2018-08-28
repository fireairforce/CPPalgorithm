#include<iostream>
#include<fstream>
using namespace std;
int gcd(int x,int y)
{
	return y?gcd(y,x%y):x;
}
int lcm(int x,int y)
{
	return x*y/gcd(x,y);
}
int main()
{
	ifstream fin("jogging.in.txt");
	ofstream fout("jogging.out.txt");
	int a,b,c;
	int d,e;
	fin>>a>>b>>c;
	d=lcm(a,b);
	e=lcm(d,c);
	fout<<e<<endl;
	return 0;
}

