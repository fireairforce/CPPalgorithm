#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
vector<string> v;     //存储已经找出的情况
int sum = 0;
int main(){
    string str = "aaabbbbccccc";
    do{
        vector<string>::iterator it;
        for(it=v.begin(); it != v.end(); it++)
            {
            if((*it).find(str, 0) != string::npos)
            {  //如果在已得的里面能找到，就判断下一个
                break;
            }
        }
        if( it != v.end() ) continue;
        string str2 = str + str;
        v.push_back(str2);
        reverse(str2.begin(), str2.end());     //需要algorithm头文件
        v.push_back(str2);
        sum ++;
    }while(next_permutation(str.begin(), str.end()));
    cout <<sum;
}
