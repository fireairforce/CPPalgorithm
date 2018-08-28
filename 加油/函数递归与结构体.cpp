#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
using namespace std;
int n;
vector<int>pile[30];
 //�ҵ�ľ�����ڵĶ�pile�͸߶�height,�����õ���ʽ���ص�����
void find_block(int a, int& p,int& h){  //�����Ǵ��ݵ�ַ...���ں������޸���ֵ,������ֵҲ�����Ÿı�
    for(p=0;p<n;p++)
        for(h=0;h<pile[p].size();h++)
             if(pile[p][h]==a) return ;//void�е�return:�˳������壬����ں������β������Ҳ���Զ��˳���
                                         //�������;��Ҫ�˳��Ļ�����return
 }
 //��p�Ѹ߶�Ϊh��ľ���Ϸ����е�ľ���ƻ�ԭλ��
 void clear_above(int p,int h){
     for(int i=h+1;i<pile[p].size();i++){
         int t=pile[p][i];
         pile[t].push_back(t);   //�ѱ��Ϊt��ľ��Ż�ԭλ����t��
     }
     pile[p].resize(h+1);    //���¶���p�ѵĳ���
}
 //��p�Ѹ߶�Ϊh�����Ϸ���ľ�������Ƶ�p2�ѵ�β��
 void pile_onto(int p,int h,int p2){
     for(int i=h;i<pile[p].size();i++) pile[p2].push_back(pile[p][i]);
     pile[p].resize(h);
 }
 //���ľ������״̬
 void print(){
     for(int i=0;i<n;i++){
         printf("%d:",i);
         for(int j=0;j<pile[i].size();j++){
             printf(" %d",pile[i][j]);         }
         printf("\n");
     }
 }
 int main(){
     int a,b;
     string s1,s2;
     scanf("%d",&n);
     for(int i=0;i<n;i++) pile[i].push_back(i);
     while(cin>>s1){
         if(s1=="quit") break;
         cin>>a>>s2>>b;
         int pa,pb,ha,hb;
        find_block(a,pa,ha);
        find_block(b,pb,hb);
        if(pa==pb) continue;
        if(s2=="onto") clear_above(pb,hb);
        if(s1=="move") clear_above(pa,ha);
         pile_onto(pa,ha,pb);
    }
     print();
    return 0;
 }

