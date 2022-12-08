#include<bits/stdc++.h>

using namespace std;
int main()
{
    long long a,b,c;
    cin>>a>>b>>c;
    long long x=a/c;
    long long y=b/c;
    if(a%c!=0)
    {
        x+=1;
    }
    if(b%c!=0)
    {
        y+=1;
    }
    long long sum=x*y;
    cout<<sum<<endl;
}
