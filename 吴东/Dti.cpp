#include<iostream>  
#include<map>  
#include<utility>  
using namespace std;  
  
int main()  
{  
    map<int , int> word_count;  
    int number;  
  
    while(cin>>number)  
        ++word_count[number];  
  
    for(map<int , int>::iterator iter = word_count.begin() ; iter != word_count.end() ; ++iter)  
        cout<<(*iter).first<<"\t\t"  
            <<(*iter).second<<endl;  
  
    return 0;  
}  
