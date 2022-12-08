#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b ,count=0;
    cin>>a>>b;
    if(a>=1 && b<=10)
    {
        while(a<=b)
        {
            a=a*3;
            b=b*2;
            count++;
        }
    }
    else
    {
        count=0;
    }
    cout<<count<<endl;


    return 0;
}
