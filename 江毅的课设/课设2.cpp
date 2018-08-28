#include<iostream>          //数据流输入输出
#include<string>			//字符串操作
#include<fstream>			//文件输入输出
#include<time.h>			//时间库函数
#include<iomanip>			//输入输出格式符
#include<bits/stdc++.h>
using namespace std;		//命名空间
int year,month;
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
class Order_infor
{
	string name;            //用户姓名
	string sex;             //用户性别
	string addr;            //用户地址
	string tel;             //用户号码
	string mage;            //杂志单位
	float price;            //杂志单价
	int num;                //订阅数目
	int y,m;                //订阅限期
	int g;
public:
	Order_infor* head;                                           //信息类头指针
	Order_infor* next;                                           //信息类next域
    void input();				                                 //录入函数
    void input(ifstream & infile);			                     //读取函数
    void output();			                                     //输出函数
	void output(ofstream & outfile);		                     //写入函数
	float getprice();
	int getnum();
	int getyear();			                                     //获取期限时间函数
	int getmonth();
	string getname();
	void order();			                                        //录入信息
	void mend();			                                        //修改信息
	void del_select();
	void del1();	                                                //删除信息
	void del2();
	void found();
	Order_infor*find(string n);
    bool find(int y,int m);
	void statistic();
	void show();			                                        //显示信息
	bool comp(int y,int m);						                    //判断当前订阅状况函数
    void save();			                                        //保存信息
    void begin();			                                        //初始信息
    void clear();			                                        //清除函数
    void setg(int k){ g=k; }			                            //设置系统修改标志
	int  getg(){ return g;}	                                        //返回系统修改标志
}d;
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
float Order_infor::getprice()
{
	return price;
}
int Order_infor::getnum()
{
	return num;
}
int Order_infor::getyear()
{
	return y;
}
int Order_infor::getmonth()
{
	return m;
}
string Order_infor::getname()
{
	return name;
}

/*888888888888888888888888888888888888888888888888888888888888888888888888*/
class Menu
{
 public:
	void about();		                                            //关于
    void mainmenu();			                                 	//主菜单函数
	bool land();                                                    //管理员登陆
};
/*888888888888888888888888888888888888888888888888888888888888888888888888*/
void Menu::about()
{
	cout<<"┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅"<<endl
        <<"\t1."<<endl
        <<"\t2."<<endl
        <<"\t3."<<endl
        <<"\t4."<<endl;
    cout<<"┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅┅"<<endl;
}
/*88888888888888888888888888888888888888888888888888888888888888888888888888*/
bool Menu::land()
{
	Menu b;                                            //定义菜单类对象
    b.about();                                          //输出系统说明
	string s;
    int i=0;                                            //计数变量
	cout<<"请输入管理员密码："<<endl;                   //输出提示信息
	while(1)
	{
	cin>>s;
	if(s=="123456")                                     //输入正确
	return true;                                        //返回正确
	else                                                //输错了
	{
	 cout<<"输入密码错误,请重新输入：";                 //输出提示信息
	 i++;                                               //计数变量自加
     if(i>=3)                                           //连输三次错误
	 break;                                             //跳出循环
	}
	}
	cout<<"输入错误三次！系统自动退出！"<<endl;         //提示将退出登录
	getchar();                                    //显示暂停
	return false;                                       //返回错误
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Menu::mainmenu()
{
	system("cls");
	string s;
	cout<<"********************************************************************************"<<endl;
	cout<<"                           欢迎使用杂志订阅管理软件                             "<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<"\t\t0.退出程序              4.浏览订阅用户"<<endl;
	cout<<"\t\t1.增加新订户            5.查找用户信息"<<endl;
	cout<<"\t\t2.删除用户              6.修改用户信息"<<endl;
	cout<<"\t\t3.统计本期杂志订户数    7.保存信息    "<<endl;
	cout<<"请输入功能按钮：";
	cin>>s;
	switch(s[0])
	{
	case'1':d.order();break;
	case'2':d.del_select();break;
	case'3':d.statistic();break;
	case'4':d.show();break;
	case'5':d.found();break;
	case'6':d.mend();break;
	case'7':d.save();break;
	default:return;
	}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::input()
{
		cout<<"请输入姓名: ";
		while(1)
		{
			cin>>name;                                //输入姓名
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n姓名输入错误,请重新输入:";
				cin.clear();                         //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
			cout<<"请输入性别: ";
		while(1)
		{
			cin>>sex;                               //输入性别
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n性别输入错误,请重新输入:";
				cin.clear();                         //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
			cout<<"请输入地址: ";	                         //设置地址
		while(1)
		{
			cin>>addr;                                //输入地址
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n地址输入错误,请重新输入:";
				cin.clear();                         //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
			cout<<"请输入电话号码: ";	                         //设置电话号码
		while(1)
		{
			cin>>tel;                                //输入电话号码
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n号码输入错误,请重新输入:";
				cin.clear();                         //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
	cout<<"请输入杂志单位: ";	                         //设置杂志单位
		while(1)
		{
			cin>>mage;                                //输入杂志单位
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n杂志单位输入错误,请重新输入:";
				cin.clear();                         //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
			cout<<"请输入单价: ";	                         //设置单价
		while(1)
		{
			cin>>price;                                //输入单价
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n单价输入错误,请重新输入:";
				cin.clear();                        //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
			cout<<"请输入订阅数: ";	                         //设置订阅数
		while(1)
		{
			cin>>num;                                //输入订阅数
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n订阅数输入错误,请重新输入:";
				cin.clear();                         //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
		cout<<"请输入订阅限期（年 月）: ";           //设置期限
		while(1)
		{
			cin>>y>>m;                                //输入期限
			if (cin.fail())						     //判断输入的数据类型是否有错
			{
				cout <<"\n订阅限期输入错误,请重新输入:";
				cin.clear();                         //清除错误状态
				cin.get();			                 //重输
			}
			else break;                              //输入正确则跳出循环
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::input(ifstream & infile)                                         //带参录入函数向链表输入
{
	infile>>name>>sex>>addr>>tel>>mage>>price>>num>>y>>m;         //输入至链表

}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void  Order_infor::output()                                                        //信息输出函数向显示屏输出
{
	cout<<setw(8)<<name<<setw(4)<<sex<<setw(10)<<addr<<setw(13)<<tel<<setw(10)<<mage<<setw(6)<<price<<setw(4)<<num<<setw(2)<<y<<"/"<<m<<endl;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::output(ofstream & outfile)   //向文件输出信息
{
	outfile<<setw(10)<<name				       //setw()设置输出宽度
		   <<setw(10)<<sex
		   <<setw(10)<<addr
		   <<setw(12)<<tel
		   <<setw(10)<<mage
		   <<setw(10)<<price
		   <<setw(10)<<num
		   <<setw(10)<<y
		   <<setw(10)<<m
		   <<endl;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
bool Order_infor::comp(int y,int m)                   //判断是否超期
{
	if(year>y||(year==y&&month>m))//先比较年，若一样则比较月
		return true;                       //比较当前时间与限期,获得订阅的当前状况,返回表示订阅超期
	else
		return false;					   //返回表示订阅未超期
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::order()                                            //向链表尾部录入订阅信息
{
	    system("cls");                                              //清屏
	    Order_infor *p1,*p2=NULL;                                   //定义对象指针
		p1=head;                                                    //将头指针赋给p1
		int n=1;                                                    //定义循环控制变量
		while(p1->next)                                             //当头结点后有数据时执行循环，头结点为空也不会执行循环
			p1=p1->next;                                            //使p能够指向未存放数据的内存,录入信息会存放在所有信息之后
		while(n)                                                    //此循环执行在链表尾部插入录入的信息
		{                                                           //通过循环不断开辟新空间录入新的数据
			p2=new Order_infor;                                       //开辟存储空间，返回地址给p2
			p2->input();                                            //调用录入函数,为p2所指结点数据赋值
			p1->next=p2;                                            //p1的next指向新开辟空间，连接了p1和p2
			p2->next=NULL;                                          //p2的next变为空指针
			p1=p1->next;                                            //p1指向新开辟的空间，p1紧随p2之后
			Order_infor::setg(1);                                        //标记为修改
			cout<<"\t\t\t按1继续,按0返回: ";                        //控制变量控制循环
			cin>>n;                                                 //输入n
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::show()
{
	system("cls");   //清屏
	cout.setf(ios::left);
	cout<<"订阅基本信息如下:"<<endl                                //显示所有订阅信息
		<<setw(8)<<"姓名"<<setw(8)<<"性别"<<setw(8)<<"地址"
		<<setw(13)<<"电话"<<setw(8)<<"单位"<<setw(8)<<"单价"
		<<setw(8)<<"定阅数"<<setw(8)<<"期限"<<endl;
	Order_infor *p;                                                  //定义订阅信息类对象指针
	p=head;                                                        //指向链表头部，启用链表信息
	while(p->next)                                                 //只要下一结点不为空则执行循环
	{                                                              //此循环功能在于输出所有订阅信息
		p=p->next;                                                 //P指向下一节点
		cout<<setw(8)<<p->name<<setw(8)<<p->sex<<setw(8)<<p->addr
			<<setw(13)<<p->tel<<setw(8)<<p->mage<<setw(8)<<p->price<<setw(8)<<p->num<<setw(4)<<p->y<<"/"<<p->m<<endl;                                               //调用next所指对象的输出信息函数，头结点未存放数据只是初始化了next
	}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::found()
{
    system("cls");                                                   //清屏
	string n;                                                        //定义辅助变量
		cout<<"输入姓名: ";                                          //输出提示信息
		cin>>n;                                                      //输入选择
		if(!find(n))                                                 //调用find函数查找
		{
		cout<<"\t\t找不到你要查找的内容!"<<endl;                     //找不到的话输出相应提示信息
		return;                                                      //函数调用结束
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
Order_infor* Order_infor::find(string n)
{
	system("cls");                                                 //清屏
	Order_infor *p;                                                  //定义辅助指针
	p=head;                                                        //指向链表头结点
	while(p->next)                                                 //当链表未至尾部时执行循环
	{

		if( (p->next)->getname()==n )                         //班次匹配上则输出所查到的订阅信息
		{
			cout.setf(ios::left);
			cout<<"订阅基本信息如下:"<<endl                         //输出信息
			    << "姓名   性别   地址   电话   单位   单价   定阅数   期限"<<endl;
			(p->next)->output();                                      //调用输出函数
			return p;                                                 //表示找到，返回的是目标结点的前一结点
		}
		p=p->next;                                                    //指向下一节点
	}
	return NULL;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::mend()                                      //修改函数
{
	    system("cls");                                       //清屏
		Order_infor *p;                                      //定义信息类指针变量
		string n;
		cout<<"\t\t\t输入姓名方便查找: ";                                //输出提示信息
		cin>>n;
		p=find(n);                                           //调用查找函数
		if(!p)                                               //判断是否找到
		{
			cout<<"\t\t找不到你要修改的内容！请利用程序查询功能确认！"<<endl;     //输出提示信息
			return;                                      //函数调用结束
		}
		(p->next)->input();                              //调用录入函数对目标结点数据再录入
		Order_infor::setg(1);
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::del_select()
{
	cout<<"请选择删除选项:"<<endl;
	cout<<"1.删除过期用户；2.删除指定用户"<<endl;
	int c;
	cin>>c;
	switch(c)
	{
	case 1:d.del2();break;
	case 2:d.del1();break;
	default:cout<<"输入错误！";
	}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::del1()                                              //删除车辆信息函数
{
	    system("cls");                                              //清屏
		Order_infor *p1,*p2,*p3;                                      //定义两对象指针用于链表操作
		string n;
		cout<<"\t\t\t输入姓名: ";                                   //输出提示信息
		cin>>n;
		p1=find(n);                                                 //调用查找函数
		if(!p1)                                                     //判断函数返回值是否为NULL
		{
			cout<<"\t\t找不到你要删除的内容!"<<endl;                //输出没找到的提示
			return;                                                 //函数调用结束
		}
		cout<<"\n\t\t\t确定删除(y/n)?";                             //显示将要删除数据信息供用户核对
		char a;
		cin>>a;                                                     //输入指示
		if(a=='y'||a=='Y')
		{                                                           //因为头结点为空仅有next域所以只要考虑被删结点是中间结点和尾结点情况
			if((p1->next)->next==NULL)                              //目标结点为尾结点时
			{
				p2=p1->next;                                        //p2指向目标结点
				p1->next=NULL;                                      //p1连接目标结点的next域重新赋值为空指针
				delete p2;                                          //释放目标空间
			}
			else
			{                                                       //目标结点为中间节点时
				p2=p1->next;                                        //p2指向目标结点
				p3=(p1->next)->next;                                //p3指向目标结点下一结点
				p1->next=p3;                                        //连接目标结点前后结点
				delete p2;                                          //释放目标结点
			}
			Order_infor::setg(1);                                   //标记为修改
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::del2()
{
	system("cls");                                              //清屏
	Order_infor *p1,*p2,*p3;                                    //定义两对象指针用于链表操作
	int n;
	char c;
    p1=head;
	while(p1->next)
	{
		n=d.comp((p1->next)->y,(p1->next)->m);
		if(n)
		{
			system("cls");
			cout<<"订阅基本信息如下:"<<endl                         //输出信息
			    << "姓名   性别   地址   电话   单位   单价   定阅数   期限"<<endl;
			(p1->next)->output();
		  	cout<<"是否删除（y/n）";
            cin>>c;
				if(c=='y'||c=='Y')
				{                                                               //因为头结点为空仅有next域所以只要考虑被删结点是中间结点和尾结点情况
		            	if((p1->next)->next==NULL)                              //目标结点为尾结点时
						{
		             		p2=p1->next;                                        //p2指向目标结点
		            		p1->next=NULL;                                      //p1连接目标结点的next域重新赋值为空指针
		            		delete p2;                                          //释放目标空间
							return;
						}
		            	else
						{                                                       //目标结点为中间节点时
		            		p2=p1->next;                                        //p2指向目标结点
	             			p3=(p1->next)->next;                                //p3指向目标结点下一结点
		             		p1->next=p3;                                        //连接目标结点前后结点
		             		delete p2;                                          //释放目标结点
						}
    		       	Order_infor::setg(1);                                        //标记为修改
				}
		}
    	p1=p1->next;
	}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::statistic()
{
	Order_infor *p;
	int n=0;
	int sum=0;
    p=head;
	cout<<"本期订阅信息"<<endl;
	cout<<"用户名  订阅数  单价   全额"<<endl;
	while(p->next)
	{
		cout<<(p->next)->getname()<<"\t"<<(p->next)->getnum()
			<<"\t"<<(p->next)->getprice()<<"\t"
			<<((p->next)->getnum()*(p->next)->getprice())<<endl;
        n=n+((p->next)->getnum());
		sum+=((p->next)->getnum()*(p->next)->getprice());
		p=p->next;
	}
	cout<<"合计"<<"\t"<<n <<"\t\t"<<sum<<endl;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::begin()
{
    Order_infor *p,*p2;
	p=head;
	ifstream infile("杂志订阅.txt",ios::in);
	if(!infile)
	{
		ofstream outfile("杂志订阅.txt",ios::out);
		outfile.close();
		return ;
	}
while(!infile.eof())
	{
		p2=new Order_infor;
		p2->input(infile);
		p->next=p2;
	    p2->next=NULL;
		p=p->next;
	}
      infile.close();
	  p=head;
      while(p->next)
	  {
     	p2=p;
    	p=p->next;
	  }
      p2->next=NULL;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::save()
{
		Order_infor *p;
		p=head;
		ofstream outfile("杂志订阅.txt",ios::out);
			while(p->next)
			{
				(p->next)->output(outfile);
				p=p->next;
			}
		cout<<"\t\t\t文件已保存! "<<endl;
		Order_infor::g=0;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::clear()
{
	Order_infor *p,*p2;
	p=head->next;
	while(p)
	{
		p2=p;
		p=p->next;
		delete p2;
	}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
int main()
{
	d.head=new Order_infor;
	d.head->next=NULL;
	Menu menu;
	int k=menu.land();                               //调用登录函数返回值赋给K
	int n=1,m;
	d.begin();
	cout<<"请输入限期（年 月）";
	cin>>year>>month;
	while(k&&n)
	{
		menu.mainmenu();
		cout<<"是否继续  1——是，0——否";
		cin>>n;
	}
	if(d.getg()==1)                                   //若信息被修改过，则提醒是否保存
			 {
		    	cout<<"\t\t\t是否保存?  1┄保存0┄不保存: ";
		    	cin>>m;
		    	if(m==1)
		    	d.save();
			 }
	d.clear();
 return 0;
}
//细节自己补充
