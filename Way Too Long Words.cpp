#include <iostream>
#include<string>
using namespace std;
int main()
{
    string a;
    int b,c;
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        cin >> a;
        c=a.size();
        if (c > 10)
        {
            cout << a[0] << c - 2 << a[c - 1] << endl;
        }
        else
        {
            cout << a << endl;
        }
    }
    return 0;
}
