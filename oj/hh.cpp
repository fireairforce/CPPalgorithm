#include <iostream>
#include <string>
#include <cstdio>
#include <cstring>
#include <sstream>
#include <cstdlib>
using namespace std;

class Student {
    public:
        char name[20];
        char c;
        int age,studentID;
        double first,second,third,fouth,average;
        void input()
        {
            cin.getline(name,20,',');
            cin>>age>>c>>studentID>>c;
            cin>>first>>c>>second>>c>>third>>c>>fouth;
        }
        void calculate()
        {
            average=(first+second+third+fouth)/4;
        }
        void output()
        {
            cout<<name<<',';
            cout<<age<<','<<studentID<<','<<average<<endl;
        }
};

int main() {
    Student student;        // ������Ķ���
    student.input();        // ��������
    student.calculate();    // ����ƽ���ɼ�
    student.output();       // �������
}
