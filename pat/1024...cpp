
using namespace std;

char str[10000];

void solve()
{
    char num[10000] = {0};  //ȥ��С���������ִ�
    int len = strchr(str, 'E') - str - 3;   //С�����ֳ���

    num[0] = str[1];
    strncpy(num + 1, str + 3, len);

    int ex = atoi(str + len + 4);   //��ȡָ��
    int pos = 1;    //С����λ��

    if(str[0] == '-')
        cout << '-';

    if(ex > 0){
        pos += ex;
        if(len < ex){
            cout << num;
            for(int i = len; i < ex; i ++)
                cout << '0';
        }
        else if(len > ex){
            for(int i = 0; i < pos; i ++)
                cout << num[i];
            cout << '.';
            for(int i = pos; i < len + 1; i ++)
                cout << num[i];
        }
        else{
            cout << num;
        }
    }

    else if(ex < 0)
    {
        cout << "0.";
        for(int i = ex + 1; i < 0; i ++){
            cout << '0';
        }
        for(int i = 0; i < len + 1; i ++)
            cout << num[i];
    }

    else{
        for(int i = 0; i < pos; i ++)
            cout << num[i];
        cout << '.';
        for(int i = pos; i < len + 1; i ++)
            cout << num[i];
    }

    cout << endl;
}

int main()
{
    cin >> str;
    solve();
    return 0;
}
