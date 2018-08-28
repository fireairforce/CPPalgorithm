#include<iostream>
struct Question{
    float value;
    int wr[5],a[5],r_num;
} Q[100];
float Correct(int q){//参数为所判题号，即与Q[q]的数据做比较
    int n;//答题者所选选项个数
    int flag=0;
    scanf("%d",&n);
    for(int i=0;i<n;++i){
        char tmp;
        scanf(" %c",&tmp);
        //printf("选了%c\n",tmp);
        tmp-='a';
        //printf("判断a[%d]的正确性\n",(int)tmp);
        if(!Q[q].a[(int)tmp]){
            ++Q[q].wr[(int)tmp];
            flag=1;
        }
        else{
            --Q[q].wr[(int)tmp];
        }
        }
        if(flag)return 0;
        if(n<Q[q].r_num){
            return Q[q].value/2;
        }
        return Q[q].value;
    }
    float S[1000];
int main(){
    int N,M,wrmax=0;
    scanf("%d%d",&N,&M);
    for(int i=0;i<M;++i){
        for(int j=0;j<5;++j){
        Q[i].a[j]=0;
        Q[i].wr[j]=0;
        }
        scanf("%f%*d%d",&Q[i].value,&Q[i].r_num);
        for(int j=0;j<Q[i].r_num;++j){
            char qa;
            scanf(" %c",&qa);
            qa-='a';
            Q[i].a[(int)qa]=1;
            Q[i].wr[(int)qa]=N;
            //printf("%d %d %d %d %d\n",Q[i].a[0],Q[i].a[1],Q[i].a[2],Q[i].a[3],Q[i].a[4]);
        }
    }
    for(int i=0;i<N;++i){//判学生i的卷子
    for(int j=0;j<M;++j){
        char ch;
        scanf("%c",&ch);
        while(ch!='(')
        scanf("%c",&ch);
        S[i]+=Correct(j);
    }
    printf("%.1f\n",S[i]);
    }
    /*for(int i=0;i<M;++i){
        printf("%d,%d,%d,%d,%d\n",Q[i].wr[0],Q[i].wr[1],Q[i].wr[2],Q[i].wr[3],Q[i].wr[4]);
    }
    */
    for(int i=0;i<M;++i){
        for(int j=0;j<5;++j){
            if(Q[i].wr[j]>wrmax){
                wrmax=Q[i].wr[j];
            }
        }
    }
    if(!wrmax)
    printf("Too simple");
    else{
    for(int i=0;i<M;++i){
        for(int j=0;j<5;++j){
            if(Q[i].wr[j]==wrmax){
            printf("%d %d-%c\n",wrmax,i+1,(char)(j+'a'));
            }
        }
    }
    }
    return 0;
}

