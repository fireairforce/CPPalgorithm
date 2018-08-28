#include<iostream>          //�������������
#include<string>			//�ַ�������
#include<fstream>			//�ļ��������
#include<time.h>			//ʱ��⺯��
#include<iomanip>			//���������ʽ��
#include<bits/stdc++.h>
using namespace std;		//�����ռ�
int year,month;
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
class Order_infor
{
	string name;            //�û�����
	string sex;             //�û��Ա�
	string addr;            //�û���ַ
	string tel;             //�û�����
	string mage;            //��־��λ
	float price;            //��־����
	int num;                //������Ŀ
	int y,m;                //��������
	int g;
public:
	Order_infor* head;                                           //��Ϣ��ͷָ��
	Order_infor* next;                                           //��Ϣ��next��
    void input();				                                 //¼�뺯��
    void input(ifstream & infile);			                     //��ȡ����
    void output();			                                     //�������
	void output(ofstream & outfile);		                     //д�뺯��
	float getprice();
	int getnum();
	int getyear();			                                     //��ȡ����ʱ�亯��
	int getmonth();
	string getname();
	void order();			                                        //¼����Ϣ
	void mend();			                                        //�޸���Ϣ
	void del_select();
	void del1();	                                                //ɾ����Ϣ
	void del2();
	void found();
	Order_infor*find(string n);
    bool find(int y,int m);
	void statistic();
	void show();			                                        //��ʾ��Ϣ
	bool comp(int y,int m);						                    //�жϵ�ǰ����״������
    void save();			                                        //������Ϣ
    void begin();			                                        //��ʼ��Ϣ
    void clear();			                                        //�������
    void setg(int k){ g=k; }			                            //����ϵͳ�޸ı�־
	int  getg(){ return g;}	                                        //����ϵͳ�޸ı�־
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
	void about();		                                            //����
    void mainmenu();			                                 	//���˵�����
	bool land();                                                    //����Ա��½
};
/*888888888888888888888888888888888888888888888888888888888888888888888888*/
void Menu::about()
{
	cout<<"������������������������������������������������������������"<<endl
        <<"\t1."<<endl
        <<"\t2."<<endl
        <<"\t3."<<endl
        <<"\t4."<<endl;
    cout<<"��������������������������������������������������������"<<endl;
}
/*88888888888888888888888888888888888888888888888888888888888888888888888888*/
bool Menu::land()
{
	Menu b;                                            //����˵������
    b.about();                                          //���ϵͳ˵��
	string s;
    int i=0;                                            //��������
	cout<<"���������Ա���룺"<<endl;                   //�����ʾ��Ϣ
	while(1)
	{
	cin>>s;
	if(s=="123456")                                     //������ȷ
	return true;                                        //������ȷ
	else                                                //�����
	{
	 cout<<"�����������,���������룺";                 //�����ʾ��Ϣ
	 i++;                                               //���������Լ�
     if(i>=3)                                           //�������δ���
	 break;                                             //����ѭ��
	}
	}
	cout<<"����������Σ�ϵͳ�Զ��˳���"<<endl;         //��ʾ���˳���¼
	getchar();                                    //��ʾ��ͣ
	return false;                                       //���ش���
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Menu::mainmenu()
{
	system("cls");
	string s;
	cout<<"********************************************************************************"<<endl;
	cout<<"                           ��ӭʹ����־���Ĺ������                             "<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<"\t\t0.�˳�����              4.��������û�"<<endl;
	cout<<"\t\t1.�����¶���            5.�����û���Ϣ"<<endl;
	cout<<"\t\t2.ɾ���û�              6.�޸��û���Ϣ"<<endl;
	cout<<"\t\t3.ͳ�Ʊ�����־������    7.������Ϣ    "<<endl;
	cout<<"�����빦�ܰ�ť��";
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
		cout<<"����������: ";
		while(1)
		{
			cin>>name;                                //��������
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n�����������,����������:";
				cin.clear();                         //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
			cout<<"�������Ա�: ";
		while(1)
		{
			cin>>sex;                               //�����Ա�
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n�Ա��������,����������:";
				cin.clear();                         //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
			cout<<"�������ַ: ";	                         //���õ�ַ
		while(1)
		{
			cin>>addr;                                //�����ַ
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n��ַ�������,����������:";
				cin.clear();                         //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
			cout<<"������绰����: ";	                         //���õ绰����
		while(1)
		{
			cin>>tel;                                //����绰����
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n�����������,����������:";
				cin.clear();                         //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
	cout<<"��������־��λ: ";	                         //������־��λ
		while(1)
		{
			cin>>mage;                                //������־��λ
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n��־��λ�������,����������:";
				cin.clear();                         //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
			cout<<"�����뵥��: ";	                         //���õ���
		while(1)
		{
			cin>>price;                                //���뵥��
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n�����������,����������:";
				cin.clear();                        //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
			cout<<"�����붩����: ";	                         //���ö�����
		while(1)
		{
			cin>>num;                                //���붩����
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n�������������,����������:";
				cin.clear();                         //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
		cout<<"�����붩�����ڣ��� �£�: ";           //��������
		while(1)
		{
			cin>>y>>m;                                //��������
			if (cin.fail())						     //�ж���������������Ƿ��д�
			{
				cout <<"\n���������������,����������:";
				cin.clear();                         //�������״̬
				cin.get();			                 //����
			}
			else break;                              //������ȷ������ѭ��
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::input(ifstream & infile)                                         //����¼�뺯������������
{
	infile>>name>>sex>>addr>>tel>>mage>>price>>num>>y>>m;         //����������

}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void  Order_infor::output()                                                        //��Ϣ�����������ʾ�����
{
	cout<<setw(8)<<name<<setw(4)<<sex<<setw(10)<<addr<<setw(13)<<tel<<setw(10)<<mage<<setw(6)<<price<<setw(4)<<num<<setw(2)<<y<<"/"<<m<<endl;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::output(ofstream & outfile)   //���ļ������Ϣ
{
	outfile<<setw(10)<<name				       //setw()����������
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
bool Order_infor::comp(int y,int m)                   //�ж��Ƿ���
{
	if(year>y||(year==y&&month>m))//�ȱȽ��꣬��һ����Ƚ���
		return true;                       //�Ƚϵ�ǰʱ��������,��ö��ĵĵ�ǰ״��,���ر�ʾ���ĳ���
	else
		return false;					   //���ر�ʾ����δ����
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::order()                                            //������β��¼�붩����Ϣ
{
	    system("cls");                                              //����
	    Order_infor *p1,*p2=NULL;                                   //�������ָ��
		p1=head;                                                    //��ͷָ�븳��p1
		int n=1;                                                    //����ѭ�����Ʊ���
		while(p1->next)                                             //��ͷ����������ʱִ��ѭ����ͷ���Ϊ��Ҳ����ִ��ѭ��
			p1=p1->next;                                            //ʹp�ܹ�ָ��δ������ݵ��ڴ�,¼����Ϣ������������Ϣ֮��
		while(n)                                                    //��ѭ��ִ��������β������¼�����Ϣ
		{                                                           //ͨ��ѭ�����Ͽ����¿ռ�¼���µ�����
			p2=new Order_infor;                                       //���ٴ洢�ռ䣬���ص�ַ��p2
			p2->input();                                            //����¼�뺯��,Ϊp2��ָ������ݸ�ֵ
			p1->next=p2;                                            //p1��nextָ���¿��ٿռ䣬������p1��p2
			p2->next=NULL;                                          //p2��next��Ϊ��ָ��
			p1=p1->next;                                            //p1ָ���¿��ٵĿռ䣬p1����p2֮��
			Order_infor::setg(1);                                        //���Ϊ�޸�
			cout<<"\t\t\t��1����,��0����: ";                        //���Ʊ�������ѭ��
			cin>>n;                                                 //����n
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::show()
{
	system("cls");   //����
	cout.setf(ios::left);
	cout<<"���Ļ�����Ϣ����:"<<endl                                //��ʾ���ж�����Ϣ
		<<setw(8)<<"����"<<setw(8)<<"�Ա�"<<setw(8)<<"��ַ"
		<<setw(13)<<"�绰"<<setw(8)<<"��λ"<<setw(8)<<"����"
		<<setw(8)<<"������"<<setw(8)<<"����"<<endl;
	Order_infor *p;                                                  //���嶩����Ϣ�����ָ��
	p=head;                                                        //ָ������ͷ��������������Ϣ
	while(p->next)                                                 //ֻҪ��һ��㲻Ϊ����ִ��ѭ��
	{                                                              //��ѭ����������������ж�����Ϣ
		p=p->next;                                                 //Pָ����һ�ڵ�
		cout<<setw(8)<<p->name<<setw(8)<<p->sex<<setw(8)<<p->addr
			<<setw(13)<<p->tel<<setw(8)<<p->mage<<setw(8)<<p->price<<setw(8)<<p->num<<setw(4)<<p->y<<"/"<<p->m<<endl;                                               //����next��ָ����������Ϣ������ͷ���δ�������ֻ�ǳ�ʼ����next
	}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::found()
{
    system("cls");                                                   //����
	string n;                                                        //���帨������
		cout<<"��������: ";                                          //�����ʾ��Ϣ
		cin>>n;                                                      //����ѡ��
		if(!find(n))                                                 //����find��������
		{
		cout<<"\t\t�Ҳ�����Ҫ���ҵ�����!"<<endl;                     //�Ҳ����Ļ������Ӧ��ʾ��Ϣ
		return;                                                      //�������ý���
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
Order_infor* Order_infor::find(string n)
{
	system("cls");                                                 //����
	Order_infor *p;                                                  //���帨��ָ��
	p=head;                                                        //ָ������ͷ���
	while(p->next)                                                 //������δ��β��ʱִ��ѭ��
	{

		if( (p->next)->getname()==n )                         //���ƥ������������鵽�Ķ�����Ϣ
		{
			cout.setf(ios::left);
			cout<<"���Ļ�����Ϣ����:"<<endl                         //�����Ϣ
			    << "����   �Ա�   ��ַ   �绰   ��λ   ����   ������   ����"<<endl;
			(p->next)->output();                                      //�����������
			return p;                                                 //��ʾ�ҵ������ص���Ŀ�����ǰһ���
		}
		p=p->next;                                                    //ָ����һ�ڵ�
	}
	return NULL;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::mend()                                      //�޸ĺ���
{
	    system("cls");                                       //����
		Order_infor *p;                                      //������Ϣ��ָ�����
		string n;
		cout<<"\t\t\t���������������: ";                                //�����ʾ��Ϣ
		cin>>n;
		p=find(n);                                           //���ò��Һ���
		if(!p)                                               //�ж��Ƿ��ҵ�
		{
			cout<<"\t\t�Ҳ�����Ҫ�޸ĵ����ݣ������ó����ѯ����ȷ�ϣ�"<<endl;     //�����ʾ��Ϣ
			return;                                      //�������ý���
		}
		(p->next)->input();                              //����¼�뺯����Ŀ����������¼��
		Order_infor::setg(1);
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::del_select()
{
	cout<<"��ѡ��ɾ��ѡ��:"<<endl;
	cout<<"1.ɾ�������û���2.ɾ��ָ���û�"<<endl;
	int c;
	cin>>c;
	switch(c)
	{
	case 1:d.del2();break;
	case 2:d.del1();break;
	default:cout<<"�������";
	}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::del1()                                              //ɾ��������Ϣ����
{
	    system("cls");                                              //����
		Order_infor *p1,*p2,*p3;                                      //����������ָ�������������
		string n;
		cout<<"\t\t\t��������: ";                                   //�����ʾ��Ϣ
		cin>>n;
		p1=find(n);                                                 //���ò��Һ���
		if(!p1)                                                     //�жϺ�������ֵ�Ƿ�ΪNULL
		{
			cout<<"\t\t�Ҳ�����Ҫɾ��������!"<<endl;                //���û�ҵ�����ʾ
			return;                                                 //�������ý���
		}
		cout<<"\n\t\t\tȷ��ɾ��(y/n)?";                             //��ʾ��Ҫɾ��������Ϣ���û��˶�
		char a;
		cin>>a;                                                     //����ָʾ
		if(a=='y'||a=='Y')
		{                                                           //��Ϊͷ���Ϊ�ս���next������ֻҪ���Ǳ�ɾ������м����β������
			if((p1->next)->next==NULL)                              //Ŀ����Ϊβ���ʱ
			{
				p2=p1->next;                                        //p2ָ��Ŀ����
				p1->next=NULL;                                      //p1����Ŀ�����next�����¸�ֵΪ��ָ��
				delete p2;                                          //�ͷ�Ŀ��ռ�
			}
			else
			{                                                       //Ŀ����Ϊ�м�ڵ�ʱ
				p2=p1->next;                                        //p2ָ��Ŀ����
				p3=(p1->next)->next;                                //p3ָ��Ŀ������һ���
				p1->next=p3;                                        //����Ŀ����ǰ����
				delete p2;                                          //�ͷ�Ŀ����
			}
			Order_infor::setg(1);                                   //���Ϊ�޸�
		}
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::del2()
{
	system("cls");                                              //����
	Order_infor *p1,*p2,*p3;                                    //����������ָ�������������
	int n;
	char c;
    p1=head;
	while(p1->next)
	{
		n=d.comp((p1->next)->y,(p1->next)->m);
		if(n)
		{
			system("cls");
			cout<<"���Ļ�����Ϣ����:"<<endl                         //�����Ϣ
			    << "����   �Ա�   ��ַ   �绰   ��λ   ����   ������   ����"<<endl;
			(p1->next)->output();
		  	cout<<"�Ƿ�ɾ����y/n��";
            cin>>c;
				if(c=='y'||c=='Y')
				{                                                               //��Ϊͷ���Ϊ�ս���next������ֻҪ���Ǳ�ɾ������м����β������
		            	if((p1->next)->next==NULL)                              //Ŀ����Ϊβ���ʱ
						{
		             		p2=p1->next;                                        //p2ָ��Ŀ����
		            		p1->next=NULL;                                      //p1����Ŀ�����next�����¸�ֵΪ��ָ��
		            		delete p2;                                          //�ͷ�Ŀ��ռ�
							return;
						}
		            	else
						{                                                       //Ŀ����Ϊ�м�ڵ�ʱ
		            		p2=p1->next;                                        //p2ָ��Ŀ����
	             			p3=(p1->next)->next;                                //p3ָ��Ŀ������һ���
		             		p1->next=p3;                                        //����Ŀ����ǰ����
		             		delete p2;                                          //�ͷ�Ŀ����
						}
    		       	Order_infor::setg(1);                                        //���Ϊ�޸�
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
	cout<<"���ڶ�����Ϣ"<<endl;
	cout<<"�û���  ������  ����   ȫ��"<<endl;
	while(p->next)
	{
		cout<<(p->next)->getname()<<"\t"<<(p->next)->getnum()
			<<"\t"<<(p->next)->getprice()<<"\t"
			<<((p->next)->getnum()*(p->next)->getprice())<<endl;
        n=n+((p->next)->getnum());
		sum+=((p->next)->getnum()*(p->next)->getprice());
		p=p->next;
	}
	cout<<"�ϼ�"<<"\t"<<n <<"\t\t"<<sum<<endl;
}
/*888888888888888888888888888888888888888888888888888888888888888888888888888*/
void Order_infor::begin()
{
    Order_infor *p,*p2;
	p=head;
	ifstream infile("��־����.txt",ios::in);
	if(!infile)
	{
		ofstream outfile("��־����.txt",ios::out);
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
		ofstream outfile("��־����.txt",ios::out);
			while(p->next)
			{
				(p->next)->output(outfile);
				p=p->next;
			}
		cout<<"\t\t\t�ļ��ѱ���! "<<endl;
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
	int k=menu.land();                               //���õ�¼��������ֵ����K
	int n=1,m;
	d.begin();
	cout<<"���������ڣ��� �£�";
	cin>>year>>month;
	while(k&&n)
	{
		menu.mainmenu();
		cout<<"�Ƿ����  1�����ǣ�0������";
		cin>>n;
	}
	if(d.getg()==1)                                   //����Ϣ���޸Ĺ����������Ƿ񱣴�
			 {
		    	cout<<"\t\t\t�Ƿ񱣴�?  1������0��������: ";
		    	cin>>m;
		    	if(m==1)
		    	d.save();
			 }
	d.clear();
 return 0;
}
//ϸ���Լ�����
