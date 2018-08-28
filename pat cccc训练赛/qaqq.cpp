#include<bits/stdc++.h>
using namespace std;
class qaq
{
public:
    virtual string type1() const{return "Animal";}
    virtual string voice1() const{return "Vocie";}
};
class dog:public qaq
{
public:
    string type1() const {return "Dog";}
    string voice1() const {return "Woof";}
};
class cat:public qaq
{
public:
    string type1() const {return "Cat";}
    string voice1() const {return "Miaow";}
};
void type(qaq&a)
{
    cout<<a.type1();
}
void speak(qaq&a)
{
    cout<<a.voice1();
}
int main()
{
    dog d;type(d);cout<<" speak";speak(d);cout<<"-";
    cat c;type(c);cout<<" speak";speak(c);cout<<endl;
    return 0;
}
