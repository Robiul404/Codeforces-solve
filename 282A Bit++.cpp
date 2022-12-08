#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a,b;
    int rem=0;
    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;
        if(s=="X++" || s=="++X")
        {
            a=rem++;
        }
        else
        {
            b=rem--;
        }
    }
    cout <<rem;
}
