#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a;
    cin>>b;
    transform(a.begin(),a.end(),a.begin(), ::tolower);
    transform(b.begin(),b.end(),b.begin(), ::tolower);
    int x = a.compare(b);
    cout<<x<<endl;
    /*if(x==0)
    {
        cout<<"0"<<endl;
    }
    else if(x>0)
    {
        cout<<"1"<<endl;
    }
    else
    {
        cout<<"-1"<<endl;
    }
    */
}

