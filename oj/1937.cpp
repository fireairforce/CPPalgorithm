#include <iostream>
using namespace std;
int main()
{
    for(int b = 0; b < 100; ++ b)
    {
        for(int a = b + 1; a < 100; ++ a)
        {
            if(97*a - 127*b == 1)
            {
                cout << a + b << endl;
            }
        }
    }
    return 0;
}
